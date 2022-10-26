#include "StructVar.h"
#include "../ParseDescriptors.h"

StructVar::StructVar(std::string name, std::string type, bool structMember): Var(name, type) {
  auto fields = Descriptor::str2fields[type];
  std::string separator = (structMember ? "->" : ".");

  for(auto f: fields) 
  {
    size_t pos;
    if((pos = f.type.find("*")) != std::string::npos) 
    {
      PointerVar *P = new PointerVar(name + separator + f.name, f.type, -1, true );
      this->fields.push_back(P);
    } 

    else if((pos = f.type.find("[")) != std::string::npos) 
    {

    } 

    else if(f.type.find("struct ") != std::string::npos) 
    {
      this->fields.push_back(new StructVar(name + separator + f.name, f.type));
    } 

    else 
    {
      this->fields.push_back(new BaseVar(name + separator + f.name, f.type));
    }
  }
}

std::string StructVar::getInit() {
  std::string init = "";
  for(auto f: fields) {
    if(dynamic_cast<BaseVar*>(f)) 
      init += "  " + f->name + " = ";
    
    init += f->getInit();
    
    if(dynamic_cast<BaseVar*>(f)) 
      init += ";\n";

  }
  init += '\n';
  return init;
}

std::string StructVar::deallocMembers(std::string len, std::string name)
{
  std::string dealloc = "";
    for(auto f: this->fields) 
    {
      if(dynamic_cast<PointerVar*>(f) && f->type.find("void") == std::string::npos)
      {
        //if pointer var. struct member = true
        std::string memberName = f->name;
        char divider = '.';

        std::size_t pos = memberName.find(divider);
        if ( pos != std::string::npos)
        {
            memberName = memberName.substr(pos+1);
        }

        size_t n = std::count(f->type.begin(), f->type.end(), '*');

          std::string it = "_aux";
          dealloc += "  for(int " + it + " = 0; " + it + " < " + len
          + "; " + it + "++) {\n";

          if(n == 1)
          {
            dealloc += "  free(" + name + "[" + it + "]." + memberName + ");\n"; 
          }
          else if(n == 2)
          {
           dealloc += "  free(*(" + name + "[" + it + "]." + memberName + "));\n"; 
           dealloc += "free(" + name + "[" + it + "]." + memberName + ");\n"; 
          }

          dealloc += "  }\n";
        }
    }
    return dealloc;
}

std::string StructVar::deallocMembers()
{
  std::string dealloc = "";
    for(auto f: this->fields) 
    {
      if(dynamic_cast<PointerVar*>(f) && f->type.find("void") == std::string::npos)
      {

        std::string memberName = f->name;
        char divider = '.';

        std::size_t pos = memberName.find(divider);
        if ( pos != std::string::npos)
            memberName = memberName.substr(pos+1);

        size_t n = std::count(f->type.begin(), f->type.end(), '*');

          if(n == 1)
          {
            dealloc += "  free(" + name + "." + memberName + ");\n"; 
          }
          else if(n == 2)
          {
           dealloc += "  free(*(" + name + "." + memberName + "));\n"; 
           dealloc += "free(" + name + "." + memberName + ");\n"; 
          }
        }
    }
    return dealloc;
}