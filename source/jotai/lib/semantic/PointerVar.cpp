#include "PointerVar.h"

PointerVar::PointerVar(std::string name, std::string type, int depth, bool structMember) : Var(name, type), depth(depth), structMember(structMember)
{
  trimString(type);

  if(type[type.length()-1] == '*') 
  {
    type.pop_back();
    trimString(type);
  } 

  else 
  {
    // must contain [x];
    size_t l = type.find("[");
    size_t r = type.find("]", l);
    std::string sz = type.substr(l+1, r-l-1);
    type.replace(l, r-l+1, "*");
    trimString(type);

    if(sz.length() > 0) 
    {
      setLowerBound(sz);
      setUpperBound(sz);
    }
    
    this->type = type;

    while((l = this->type.find("[")) != std::string::npos) 
    {
      r = this->type.find("]", l);
      this->type.replace(l, r-l+1, "*");
    }

    type.erase(type.find("*"), 1);
    trimString(type);
  }

  Var *dflt;

  // After removing * there's still a pointer: must increase depth - pointer to pointer 
  if(type.find("*") != std::string::npos || type.find("[") != std::string::npos) 
  {
    // this is why it's going from i_0name to i_1
    dflt = new PointerVar(name, type, std::max(1, depth+1), structMember);
  } 

  else if(type.find("struct ") != std::string::npos) 
  {
    if(structMember)
    {
      for(int i = 0; i < depth; i++) 
        name += "[_j" + std::to_string(i) + "]";
      dflt = new StructVar(name, type, true);
    }
    else
    {
      for(int i = 0; i <= depth; i++) 
        name += "[_i" + std::to_string(i) + "]";
      dflt = new StructVar(name, type, false);
    }
    
  } 

  else 
  {
    dflt = new BaseVar(name, type);
  }

  members.push_back(dflt);
}

void PointerVar::setLowerBound(std::string lower_bound) {
  this->lower_bound = lower_bound;
}

void PointerVar::setUpperBound(std::string upper_bound) {
  this->upper_bound = upper_bound;
}

std::string PointerVar::getLenVar() {
  std::string len_var = "_len_" + name + std::to_string(std::max(0, depth));
  size_t pos;

  //since we can receive some names with [].->, we must reaplace them with _
  while((pos = len_var.find(".")) != std::string::npos) {
    len_var.replace(pos, 1, "_");
  }
  while((pos = len_var.find("[")) != std::string::npos) {
    len_var.replace(pos, 1, "_");
  }
  while((pos = len_var.find("]")) != std::string::npos) {
    len_var.replace(pos, 1, "_");
  }
  while((pos = len_var.find("->")) != std::string::npos) {
    len_var.replace(pos, 2, "_");
  }

  return len_var;
}

std::string PointerVar::getLen() {
  std::string llen = lower_bound, rlen = upper_bound;
  // allocate len to 1 by standard, or apply constraint
  if(llen == "") llen = "1";
  if(rlen == "") rlen = llen;

  if(llen == rlen) {
    return llen;
  } else {
    return llen + " + (next_i()%(" + rlen + " - " + llen + "))";
  }
}

std::string PointerVar::getPointerInit(Var *V, std::string len_var, int depth) {
  
  std::string it = "";

  if (structMember)
    it += "_j" + std::to_string(depth);
  else 
    it += "_i" + std::to_string(depth);

  std::string indent = "  ";
  for(int i = 0; i < depth; i++) indent += "  ";
  std::string init = indent + "for(int " + it + " = 0; " + it + " < " +
    len_var + "; " + it + "++) {\n";
  indent += "  ";
  
  if(auto PV = dynamic_cast<PointerVar*>(V)) 
  {
    init += PV->getInit();
  } 

  else if(auto BV = dynamic_cast<BaseVar*>(V)) 
  {
    init += indent + BV->name;
    
    for(int i = 0; i <= depth; i++)
      {
        if(structMember)
          init += "[_j" + std::to_string(i) + "]";
        else
          init += "[_i" + std::to_string(i) + "]";
      } 
      

    init += " = " + BV->getInit() + ";\n";
  } 

  else if(auto SV = dynamic_cast<StructVar*>(V)) 
  {
    init += indent + SV->getInit();
  }

  indent.pop_back();
  indent.pop_back();

  init += indent + "}\n";

  return init;
}

std::string PointerVar::getInit() {
  std::string llen = lower_bound, rlen = upper_bound;
  if(llen == "") llen = "1";
  if(rlen == "") rlen = llen;

  std::string indent = "  ";
  for(int i = 0; i < depth; i++) indent += "  ";

  std::string len_var = getLenVar();  

  std::string init = indent + "int " + len_var + " = " + getLen() + ";\n";

  if(members[0]->type == "void") 
  {
    if(depth == 0) return indent + type + " " + name + ";\n";
    return "";
  }
  
  if(depth == 0) 
  {
    //(struct TYPE_6__ *) malloc(_len_waiter0*sizeof(struct TYPE_6__));
    init += indent + type + " " + name + " = (" + type + ") malloc("
      + len_var + "*sizeof(" + members[0]->type + "));\n";
  } 

  else 
  {// waiter->next = (int *) malloc(_len_waiter_next0*sizeof(int));
    // no need to include type since it is a member of a struct or pointer to pointer
    init += indent + name;
    for(int i = 0; i < depth; i++) 
    {
      if(structMember)
        init += "[_j" + std::to_string(i) + "]";
      else
        init += "[_i" + std::to_string(i) + "]";
    }
    
    init += " = (" + type + ") malloc(" + len_var + "*sizeof(" 
      + members[0]->type + "));\n";
  }
  //         fill allocated space:   type that points to, allocated len, depth
  init += getPointerInit(members[0], len_var, std::max(0,depth));
  
  for(int i = 1; i < members.size(); i++) 
  {
    if(auto BV = dynamic_cast<BaseVar*>(members[i])) {
      std::cout << BV->getInit() << "\n";
    }
  }

  return init;
}

Var *PointerVar::findMember(std::string ind) {
  if(ind == "_") return members[0];
  return NULL;
}

std::string PointerVar::getDealloc() {
  std::string dealloc = "";

  std::string len_var = getLenVar();

  if (members[0]->type == "void")
      return dealloc;
  else
  {

    if (PointerVar* PV = dynamic_cast<PointerVar*>(members[0]) ) {
      std::string it = "i" + std::to_string(PV->depth);
      dealloc += "  for(int " + it + " = 0; " + it + " < " + getLenVar()
        + "; " + it + "++) {\n";
      dealloc += "    int " + PV->getLenVar() + " = " + PV->getLen() + ";\n";
      dealloc += "    " + PV->getDealloc();
      dealloc += "  }\n";
    }

    // dealloc struct members
    else if(StructVar* PV = dynamic_cast<StructVar*>(members[0]))
    {
      dealloc += PV->deallocMembers(getLenVar(), name);
    }

    dealloc += "  free(" + name;
    for(int d = 1; d <= depth; d++) {
      dealloc += "[i" + std::to_string(d) + "]";
    }
    dealloc += ");\n";
    return dealloc;
    
  }

}
