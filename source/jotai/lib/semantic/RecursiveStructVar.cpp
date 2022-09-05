#include "RecursiveStructVar.h"
#include "../ParseDescriptors.h"
#include "math.h"

RecursiveStructVar::RecursiveStructVar(std::string name, std::string type):
  Var(name, type) {
  std::string stype = type.substr(0, type.find("*"));
  trimString(stype);
  auto fields = Descriptor::str2fields[stype];
  std::string separator = "->";

  for(auto f: fields) {
    size_t pos;
    if((pos = f.type.find("*")) != std::string::npos) {
      bool recField = false;
      if(f.type == type) {
        recField = true;
      }
      if(recField) {
        RecursiveField *F = new RecursiveField("walker" + separator + f.name, f.type);
        this->fields.push_back(F);
      } else {
        PointerVar *P = new PointerVar("walker" + separator + f.name, f.type, -1);
        this->fields.push_back(P);
      }
    } else if((pos = f.type.find("[")) != std::string::npos) {

    } else if(f.type.find("struct ") != std::string::npos) {
      this->fields.push_back(new StructVar("walker" + separator + f.name, f.type));
    } else {
      this->fields.push_back(new BaseVar("walker" + separator + f.name, f.type));
    }
  }
}

std::string RecursiveStructVar::getInit() {
  if (skel == "linked")
  {
    std::string init = "  " + type + " aux_" + name + "[" + length + "];\n";
    init += "  " + type + " " + name + " = " + "_allocate_" + name + "(" + length + ", aux_" + name + ");\n";
    return init;
  }
  else if (skel == "dlinked")
  {
    std::string init = "  " + type + " aux_dlinked_" + name + "[" + length + "];\n";
    init += "  " + type + " " + name + " = " + "_allocate_Dlinked_" + name + "(" + length + ", aux_dlinked_" + name + ");\n";
    return init;
  }

  else if (skel == "btree")
  {
    int num_nodes = stoi(length);
    std::string init =  "  int counter_" + name + "= 0;\n";
    init += "  " + type + "  aux_tree_"+ name + "[" + std::to_string((int)(pow(2,num_nodes)) -1) + "];\n";
    init += "  " + type + " " + name + " = " + "_allocateBinTree_" + name + "(" + length + ", aux_tree_" + name + ", &counter_" + name +");\n";
    return init;
  }

  return "";
}

std::string RecursiveStructVar::getDelete() {
  if (skel == "linked")
    return "  _delete_" + name + "(aux_" + name + ", "+ length + ");\n";
  if (skel == "dlinked")
    return "  _delete_Dlinked_" + name + "(aux_dlinked_" + name + ", "+ length + ");\n";
  else if (skel == "btree")
    return "  _deleteBinTree_" + name + "(aux_tree_" + name + ");\n";
}

std::string RecursiveStructVar::linkedListInitFunction() {
  std::string func = type + "_allocate_" + name + "(int length, " + type + "aux_"+ name + "[]" + ") {\n";
  
  std::string indent = "  ";
  
  std::string stype = type.substr(0, type.find("*"));
  trimString(stype);

  func += indent + type + "walker = (" + type + ")malloc(sizeof(" + stype + "));\n\n";
  func += indent + "aux_"+ name + "[0] = walker;\n";
  for(auto field: fields) {
    
    if(dynamic_cast<RecursiveField*>(field)) {
      func += indent + field->name + " = ";
      func += "NULL;\n";
    } else {
      if(dynamic_cast<BaseVar*>(field)) 
        func += field->name + " = ";
        
      func += field->getInit();
      
      if(dynamic_cast<BaseVar*>(field)) 
        func += ";\n";
    }
  }
  func += "\n";
  func += indent + type + "head = walker;\n";
  func += indent + "for(int i = 1; i < length; i++) {\n";
  indent += "  ";
  for(auto field: fields) {
    if(dynamic_cast<RecursiveField*>(field)) {
      func += indent + field->name + " = (" + type + ")malloc(sizeof(" + stype + "));\n";
      func += indent + "walker = " + field->name + ";\n";
      func += indent + "aux_"+ name + "[i] = walker;\n";
    }
  }
  for(auto field: fields) {

    if(dynamic_cast<RecursiveField*>(field)) 
    {
      func += indent +  field->name + " = ";
      func += "NULL;\n";
    } 
    else 
    {
      if(dynamic_cast<BaseVar*>(field)) 
        func += field->name + " = ";
      
      func += field->getInit();
      
      if(dynamic_cast<BaseVar*>(field)) 
        func += ";\n";
    }
  }
  indent.pop_back(); indent.pop_back();
  func += indent + "}\n\n";
  
  func += indent + "return head;\n";
  func += "}\n\n";

  return func;
}


std::string RecursiveStructVar::doublyLinkedListInitFunction() {
  // std::string func = type + "aux_"+ name + "[" + length + "];\n";
   std::string func = type + "_allocate_Dlinked_" + name + "(int length, " + type + "aux_dlinked_"+ name + "[] " + ") {\n";
  
  std::string indent = "  ";
  
  std::string stype = type.substr(0, type.find("*"));
  trimString(stype);

  func += indent + type + "walker = (" + type + ")malloc(sizeof(" + stype + "));\n\n";
  func += indent + "aux_dlinked_"+ name + "[0] = walker;\n";
  bool prev = false;
  bool next = false;
  RecursiveField* prev_s;
  RecursiveField* next_s;
  for(auto field: fields) {
    
    if(RecursiveField* field_rec = dynamic_cast<RecursiveField*>(field)) {

      if (!prev)
      {
        prev_s = field_rec;
        prev = true;
      }
      else if (!next)
      {
        next_s = field_rec;
        next = true;
      }

      else if(next && prev)
        exit(0);

      func += indent + field->name + " = NULL;\n";

    } else {
      if(dynamic_cast<BaseVar*>(field)) 
        func += indent + field->name + " = ";
        
      func += field->getInit();
      
      if(dynamic_cast<BaseVar*>(field)) 
        func += ";\n";
    }
  }
  
  if(prev && next)
  {

    func += "\n";
    func += indent + type + "head = walker;\n";
    func += indent + "for(int i = 1; i < length; i++) {\n";
    indent += "  ";

    std::string clean_prev_field_name = (prev_s->name).substr(prev_s->name.find(">") + 1); 
    func += indent + next_s->name + " = (" + type + ")malloc(sizeof(" + stype + "));\n";
    func += indent + next_s->name + "->" + clean_prev_field_name + " = walker;\n";
    func += indent + "walker = " + next_s->name + ";\n";
    func += indent + "aux_dlinked_"+ name + "[i] = walker;\n";

        // last node - set next to null
    func += indent + "if (i == (length - 1)) \n";
    indent += "  ";
    func += indent + next_s->name + " = NULL;";

    indent = indent.erase(indent.size() - 2);
    
    for(auto field: fields) {
      if(dynamic_cast<RecursiveField*>(field) == NULL)
      {
        if(dynamic_cast<BaseVar*>(field)) 
          func += indent + field->name + " = ";
          
        func += field->getInit();
        
        if(dynamic_cast<BaseVar*>(field)) 
          func += ";\n";
      }
    }

    indent.pop_back(); indent.pop_back();
    func += indent + "}\n\n";
    
    func += indent + "return head;\n";
    func += "}\n\n";

    return func;
  }
  else
    exit(0);
}


std::string RecursiveStructVar::binTreeInitFunction() {

  
  std::string indent = "  ";
  int num_nodes = stoi(length);

  std::string func = type + "_allocateBinTree_" + name + "(int length, " + 
      type + "aux_tree_"+ name + "[], int *counter_" + name + ") {\n";
  
  func += indent + "if(length == 0)\n";                                                  
  func += indent + indent + "return NULL;\n";                                     
  
  std::string stype = type.substr(0, type.find("*"));
  trimString(stype);

  func += indent + type + "walker = (" + type + ")malloc(sizeof(" + stype + "));\n\n";                                         
  func += indent + "aux_tree_" + name + "[*counter_" + name + "] = walker;\n";
  func += indent + "(*counter_"+ name + ")++;\n";
  bool left = false;
  bool right = false;
  RecursiveField* left_s;
  RecursiveField* right_s;
  for(auto field: fields) {
    
    if(RecursiveField* field_rec = dynamic_cast<RecursiveField*>(field)) {

      if (!left)
      {
        left_s = field_rec;
        left = true;
      }
      else if (!right)
      {
        right_s = field_rec;
        right = true;
      }

      else if(right && left)
        exit(0);

      func += indent + field->name + " = _allocateBinTree_" + 
      name + "(length - 1, aux_tree_"+ name + ", counter_"+name+");\n";
    
    } else {
      if(dynamic_cast<BaseVar*>(field)) 
        func += indent + field->name + " = ";
        
      func += field->getInit();
      
      if(dynamic_cast<BaseVar*>(field)) 
        func += ";\n";
    }
  }
    
    func += indent + "return walker;\n";
    func += "}\n\n";

    return func; 
}

std::string RecursiveStructVar::binTreeDeleteFunction() 
{
  std::string func;
  int num_nodes = stoi(length);
  func += "void _deleteBinTree_" + name + "(" + type + "aux_tree_" + name + 
  "[]) {\n";

  func += "  for(int i = 0; i < " + std::to_string((int)(pow(2,num_nodes)) -1) + "; i++) \n";
  func += "    if(aux_tree_"+ name + "[i])\n";
  func += "      free(aux_tree_" + name + "[i]);\n";
  func += "}\n\n";

    return func;

}


std::string RecursiveStructVar::getListInitFunction() {

  if(skel == "linked") 
  {
    return linkedListInitFunction();
  }
  else if(skel == "dlinked")
  {
    return doublyLinkedListInitFunction();
  }
  else if(skel == "btree")
  {
    return binTreeInitFunction();
  }
  
}

std::string RecursiveStructVar::getListDeleteFunction() {
  std::string func;

  if(skel == "btree")
     return binTreeDeleteFunction();
  else if(skel == "dlinked")
  {
      func = "void _delete_Dlinked_" + name + "(" + type + "aux_dlinked_" + name + "[], int aux_dlinked_"+ name + "_size) {\n";
      func += "  for(int i = 0; i < aux_dlinked_" + name + "_size; i++) \n";
      func += "    if(aux_dlinked_"+ name + "[i])\n";
      func += "      free(aux_dlinked_" + name + "[i]);\n";
      func += "}\n\n";
  }
  else if (skel == "linked")
  {

      func = "void _delete_" + name + "(" + type + "aux_" + name + "[], int aux_"+ name + "_size) {\n";
      func += "  for(int i = 0; i < aux_" + name + "_size; i++) \n";
      func += "    if(aux_"+ name + "[i])\n";
      func += "      free(aux_" + name + "[i]);\n";
      func += "}\n\n";
  }

  return func;
}

void RecursiveStructVar::setSkeleton(std::string type, std::string length) {
  this->skel = type;
  this->length = length;
}


