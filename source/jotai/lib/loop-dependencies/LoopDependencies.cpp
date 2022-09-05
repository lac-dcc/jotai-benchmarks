// // Declares clang::SyntaxOnlyAction.
// #include "clang/Frontend/FrontendActions.h"
// #include "clang/Tooling/CommonOptionsParser.h"
// #include "clang/Tooling/Tooling.h"
// // Declares llvm::cl::extrahelp.
// #include "llvm/Support/CommandLine.h"
// #include "clang/ASTMatchers/ASTMatchers.h"
// #include "clang/ASTMatchers/ASTMatchFinder.h"

// using namespace clang::ast_matchers;
// using namespace clang::tooling;


// static llvm::cl::OptionCategory MatcherCategory("matcher options");

// StatementMatcher forCond =  forStmt(hasCondition(
// 									    	binaryOperator(
// 									      		 hasOperatorName("<"),
//                 								 hasLHS(ignoringParenImpCasts(declRefExpr(
//                     								to(varDecl(hasType(isInteger())).bind("condVarName"))))),
// 												hasRHS(
// 										        expr(
// 										        	hasType(
// 										         		isInteger())).bind("condValue")))));

// class LoopPrinter: public MatchFinder::MatchCallback {

// public:
//   virtual void run(const MatchFinder::MatchResult &Result) {
//     if (const clang::Decl *CondVal = Result.Nodes.getNodeAs<clang::Decl>("condValue"))
//     {
//     	CondVal->dump();
//     	llvm::outs() << CondVal << "\n";
//     }
    
//     if (const clang::Expr *CondVarName = Result.Nodes.getNodeAs<clang::Expr>("condVarName"))
//     {
//     	CondVarName->dump();
//     }
//   }
// };


// int main(int argc, const char **argv) {
//   CommonOptionsParser OptionsParser(argc, argv, MatcherCategory);
//   ClangTool Matcher(OptionsParser.getCompilations(),
//                     OptionsParser.getSourcePathList());

//   LoopPrinter Printer; 
//   MatchFinder Finder;
//   Finder.addMatcher(traverse(clang::TK_IgnoreUnlessSpelledInSource, forCond), &Printer);
//   Matcher.run(newFrontendActionFactory(&Finder).get());
  
//   return 0;
// }


// Declares clang::SyntaxOnlyAction.
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
// Declares llvm::cl::extrahelp.
#include "llvm/Support/CommandLine.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

using namespace clang::ast_matchers;
using namespace clang::tooling;

static llvm::cl::OptionCategory MatcherCategory("matcher options");


StatementMatcher ForLoopCondParam = forStmt().bind("for");
StatementMatcher WhileLoopCondParam = whileStmt().bind("while");
StatementMatcher DoWhileLoopCondParam = doStmt().bind("doWhile");
StatementMatcher hasIf = ifStmt().bind("ifSt");


class LoopPrinter: public MatchFinder::MatchCallback {
  std::set<const clang::ForStmt *> matches;
  std::set<const clang::WhileStmt *> whileMatches;
  std::set<const clang::DoStmt *> doWhileMatches;
  std::set<const clang::IfStmt *> ifMatches;

public:
  virtual void run(const MatchFinder::MatchResult &Result) {
    const clang::ForStmt *forst = Result.Nodes.getNodeAs<clang::ForStmt>("for");
    if (forst)
      matches.insert(forst);

    const clang::WhileStmt *whilest = Result.Nodes.getNodeAs<clang::WhileStmt>("while");
    if (whilest)
      whileMatches.insert(whilest);

    const clang::DoStmt *doWhilest = Result.Nodes.getNodeAs<clang::DoStmt>("doWhile");
    if (doWhilest)
      doWhileMatches.insert(doWhilest);

    const clang::IfStmt *ifSt = Result.Nodes.getNodeAs<clang::IfStmt>("ifSt");
    if (ifSt)
      ifMatches.insert(ifSt);

  }

  void printConstraints() {

      llvm::outs() << matches.size() << "\n";
      llvm::outs() << whileMatches.size() << "\n";
      llvm::outs() << doWhileMatches.size() << "\n";
      llvm::outs() << ifMatches.size() << "\n";
  }
};

int main(int argc, const char **argv) {
  CommonOptionsParser OptionsParser(argc, argv, MatcherCategory);
  ClangTool Matcher(OptionsParser.getCompilations(),
                    OptionsParser.getSourcePathList());

  LoopPrinter Printer; //
  MatchFinder Finder;
  Finder.addMatcher(traverse(clang::TK_IgnoreUnlessSpelledInSource, ForLoopCondParam), &Printer);
  Finder.addMatcher(traverse(clang::TK_IgnoreUnlessSpelledInSource, WhileLoopCondParam), &Printer);
  Finder.addMatcher(traverse(clang::TK_IgnoreUnlessSpelledInSource, DoWhileLoopCondParam), &Printer);
  Finder.addMatcher(traverse(clang::TK_IgnoreUnlessSpelledInSource, hasIf), &Printer);
  Matcher.run(newFrontendActionFactory(&Finder).get());
  Printer.printConstraints();
  
  return 0;
}