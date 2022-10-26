/*
** Usage: 
**  clang -cc1 -load libPluginDescriptors.so -plugin print-descriptors file.c 
*/

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Frontend/FrontendPluginRegistry.h"
#include "clang/Lex/Pragma.h"
#include "clang/Lex/Preprocessor.h"
#include "llvm/Support/Casting.h"

#include <numeric>
#include <string>
#include <vector>


namespace jotai {

template<typename T>
using vector = std::vector<T>;
using string = std::string;
using clang::QualType;


class PrintDescriptorsVisitor : public clang::RecursiveASTVisitor<PrintDescriptorsVisitor> {
public:
  
  bool VisitFunctionDecl(clang::FunctionDecl *F) {

    if (not F->getNumParams())
      return false;

    vector<string> paramNameList = {
      std::string("function " + F->getNameInfo().getAsString() + " "
                  + F->getReturnType().getCanonicalType().getAsString())};

    for (const auto& param : F->parameters()) {
      auto id = param->getName().str();
      if (not id.empty())
        paramNameList.push_back(id + " " + param->getOriginalType().getCanonicalType().getAsString());
      else
        paramNameList.push_back(param->getOriginalType().getCanonicalType().getAsString());
    }

    std::string res;
    for (int idx = 0; idx < paramNameList.size() - 1; idx++)
      res += paramNameList[idx] + " | ";
    res += paramNameList.back();

    llvm::outs() << res << "\n";
    return true;
  }

  //struct S | i int | c char
  bool VisitRecordDecl(clang::RecordDecl *R) {

    if (not R->isCompleteDefinition()) return true;

    llvm::outs() << "struct " + R->getNameAsString() + " |";

    std::string fields;
    for (auto field : R->fields()) {
      fields += " ";
      fields += field->getNameAsString() + " ";
      fields += field->getType().getCanonicalType().getAsString();
      fields += " |";
    }
    fields.pop_back();

    llvm::outs() << fields << "\n";
    return true;
  }

};

class PrintDescriptorsConsumer : public clang::ASTConsumer {
public:
  void HandleTranslationUnit(clang::ASTContext &Context) override {
    Visitor.TraverseDecl(Context.getTranslationUnitDecl());
  }

private:
  PrintDescriptorsVisitor Visitor;
};

class PrintDescriptorsAction : public clang::PluginASTAction {
public:
  virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(
          clang::CompilerInstance &Compiler, llvm::StringRef InFile) {
    return std::unique_ptr<clang::ASTConsumer>(new PrintDescriptorsConsumer);
  }

protected:
  bool ParseArgs(const clang::CompilerInstance &Compiler,
                 const std::vector<std::string> &args) override {
    return true;
  }
};

}  // namespace jotai

static clang::FrontendPluginRegistry::Add<jotai::PrintDescriptorsAction>
X("print-descriptors", "Prints descriptors for functions and structs");