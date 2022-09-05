#include "ParseDescriptors.h"
#include "Utils.h"
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

std::unordered_map<std::string, std::vector<Field> > Descriptor::str2fields;

// //function sum | a int | b int
Function::Function(std::string F) {

  size_t nameAndTypePos   = F.find(" ") + 1;
  size_t paramsPos = F.find("|") + 1;

  auto nameAndType = F.substr(nameAndTypePos, paramsPos - nameAndTypePos - 2);

  auto typePos = nameAndType.find(" ") + 1;
  this->name = nameAndType.substr(0, typePos - 1);
  this->type = nameAndType.substr(typePos);

  std::string params_s = F.substr(paramsPos);

  params = parseParams(std::move(params_s));
}

int Function::argc() {
  return params.size();
}

std::vector<Var*> parseParams(std::string line) {
  std::vector<Var*> params;

  size_t start = 0;
  size_t end = line.find("|");
  while(true) {
    end = line.find("|", start+1);

    std::string param_str = line.substr(start, end-start);
    trimString(param_str);
    size_t space = param_str.find(" ");

    std::string name = param_str.substr(0,space);
    std::string type = param_str.substr(space+1);

    Var *p;
    if(type.find("*") != std::string::npos || 
       type.find("[") != std::string::npos) {
      bool isRecursiveStruct = false;
      if(type.find("struct ") != std::string::npos) {
        std::string stype = type.substr(0, type.find('*'));
        trimString(stype);
        if(Descriptor::str2fields.find(stype) == Descriptor::str2fields.end()) {
          std::cerr << "Error: invalid type [" << type << "]\n";
          exit(1);
        }
        for(auto field: Descriptor::str2fields[stype]) {
          std::string fstype = field.type.substr(0, type.find('*'));
          trimString(fstype);
          if(stype == fstype) {
            isRecursiveStruct = true;
          }
        } 
      }
      if(isRecursiveStruct) {
        p = new RecursiveStructVar(name, type);
      } else {
        p = new PointerVar(name, type);
      }
    }
    else if(type.find("struct ") != std::string::npos) {
      p = new StructVar(name, type);
    } else {
      p = new BaseVar(name, type);
    }

    trimString(p->type);
    params.push_back(p);

    start = end + 1;

    if(end == std::string::npos) break;
  }

  return params;
}

Descriptor::Descriptor(std::string d_file) {
  std::ifstream D(d_file);
  std::string line, f_line;
  std::vector<std::string> s_line;
  while(!D.eof()) {
    getline(D, line);
    if(line.rfind("function",0) == 0) {
      f_line = line;
    }
    else if(line.rfind("struct",0) == 0) {
      s_line.push_back(line);
    } 
  }

  for(std::string& line: s_line) {
    parseStruct(line);
  }

  function = new Function(std::move(f_line));
}

void Descriptor::printFunctionCall() {
  std::string params = "";
  for(auto param: function->params) {
    params += param->name + ",";
  }
  if(params.length() > 0) params.pop_back();
  std::cout << "  " << function->name << "(" << params << ");\n\n";
}

std::string getTypePrint(std::string returntype)
{
    std::string prefix = "const ";
    if (returntype.rfind(prefix, 0) == 0)
      returntype = returntype.substr(prefix.size());

    if(returntype == "char" || returntype == "signed char" || returntype == "unsigned char")
      return "c";
    
    else if(returntype == "int" || returntype == "signed" || returntype == "signed int")
      return "d";

    else if(returntype == "unsigned int" || returntype == "unsigned")
      return "u";

    else if(returntype == "short" || returntype == "short int" || returntype == "signed short" || returntype == "signed short int" )
      return "hi";

    else if(returntype == "unsigned short" || returntype == "unsigned short int")
      return "hu";

    else if(returntype == "long int" || returntype == "long" || returntype == "signed long" || returntype == "signed long int")
      return "ld";

    else if(returntype == "long long int" || returntype == "long long" || returntype == "signed long long" || returntype == "signed long long int")
      return "lld";

    else if(returntype == "unsigned long" || returntype == "unsigned long int" )
      return "lu";

    else if(returntype == "unsigned long long" || returntype == "unsigned long long int" )
      return "llu";

    else if(returntype == "float")
      return "f";

    else if(returntype == "double")
      return "lf";

    else if(returntype == "long double")
      return "Lf";

    else
      return "not_primitive";
}
void Descriptor::printVarInitWithFunctionCall() {

  std::string params = "";
  for(auto param: function->params)
    params += param->name + ",";

  if(params.length() > 0)
    params.pop_back();

  std::string returntype = function->type;
  
  // std::cout <<  "  " << "clock_t jotai_start_time = clock();\n";
  
  if(returntype == "void")
  {
    std::cout << "  " << function->name << "(" << params << ");\n";
  }

  else if (returntype.find("struct") != std::string::npos)
  {

    // std::cout << "  " << "printf(\"{{struct}} %p\\n\", &benchRet); \n";
    std::cout << "  " << returntype << " benchRet = " << function->name << "(" << params << ");\n";

    std::string stype = returntype.substr(0, returntype.find('*'));
    
    trimString(stype);
    int p_count = std::count(returntype.begin(), returntype.end(), '*');

    std::string pointerPrint = "";
    for (int i = 0; i < p_count; i++)
      pointerPrint += "*";

    for(const auto& value: str2fields[stype]) 
    {
        std::string typePrint = getTypePrint(value.type);
        std::string printField = "";
        
        if(p_count)
          printField +=  "(" + pointerPrint + "benchRet)." + value.name;
        else 
          printField += "benchRet."  + value.name;

        if(typePrint == "c")
          std::cout << "  " << "printf(\"%" << typePrint << "\\n\", " << printField << " %26 + 'a');\n";

        else if(typePrint != "not_primitive")
          std::cout << "  " << "printf(\"%" << typePrint << "\\n\", " << printField << ");\n";
    }

  }
  
  else
  {

    std::string var_type = returntype.substr(0, returntype.find('*'));
    trimString(var_type);

    int p_count = std::count(returntype.begin(), returntype.end(), '*');
    std::string pointerPrint = "";
    std::string benchRetPrint = "";
    for (int i = 0; i < p_count; i++)
      pointerPrint += "*";

    std::cout << "  " << returntype << " benchRet = " << function->name << "(" << params << ");\n";
    std::string typePrint = getTypePrint(var_type);

    if(p_count)
      benchRetPrint = "(" + pointerPrint + "benchRet)";
    else
      benchRetPrint = "benchRet";

    if(typePrint == "c")
      std::cout << "  " << "printf(\"%" << typePrint << "\\n\", (" << benchRetPrint << " %26) + 'a'); \n";
    
    else if(typePrint != "not_primitive")
      std::cout << "  " << "printf(\"%" << typePrint << "\\n\", " << benchRetPrint << "); \n";

  }
  // std::cout << "  " << "clock_t jotai_end_time = clock();\n";
  // std::cout << "  " << "double seconds_jotai = (double)(jotai_end_time - jotai_start_time) / CLOCKS_PER_SEC;\n";
  // std::cout << "  " << "printf(\"%lf\\n\", seconds_jotai);\n" ;
}

// //struct S | data char * | len int
void Descriptor::parseStruct(std::string desc) {
  size_t start = desc.find("|")+1;
  
  std::string type = desc.substr(0, start-2);
  trimString(type);

  std::vector<Field> fields;

  while(true) {
    size_t end = desc.find("|", start);

    std::string field_str = desc.substr(start, end-start);
    trimString(field_str);
    size_t space = field_str.find(" ");

    Field f;
    f.name = field_str.substr(0,space);
    f.type = field_str.substr(space+1);
    trimString(f.type);
    fields.push_back(f);

    start = end + 1;

    if(end == std::string::npos) break;
  }

  Descriptor::str2fields[type] = fields;
}