#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>

#include <iostream>
#include <memory>

#ifdef DEBUG  // 用于调试信息,大家可以在编译过程中通过" -DDEBUG"来开启这一选项
#define DEBUG_OUTPUT std::cout << __LINE__ << std::endl;  // 输出行号的简单示例
#else
#define DEBUG_OUTPUT
#endif

using namespace llvm;  // 指明命名空间为llvm
#define CONST(num) \
  ConstantInt::get(context, APInt(32, num))  //得到常数值的表示,方便后面多次用到

int main(){
    LLVMContext context;
  Type *TYPE32 = Type::getInt32Ty(context);
  IRBuilder<> builder(context);
  auto module = new Module("if", context);  // module name是什么无关紧要
  auto mainFun = Function::Create(FunctionType::get(TYPE32, false),
                                  GlobalValue::LinkageTypes::ExternalLinkage,
                                  "main", module);
  auto bb = BasicBlock::Create(context, "entry", mainFun);// BasicBlock的名字在生成中无所谓,但是可以方便阅读
  builder.SetInsertPoint(bb);
  auto icmp = builder.CreateICmpSLT(CONST(1), CONST(2));//if(1<2), always true
  auto trueBB = BasicBlock::Create(context, "trueBB", mainFun);
  auto falseBB = BasicBlock::Create(context, "falseBB", mainFun);
  builder.CreateCondBr(icmp, trueBB, falseBB);
//when ture
  builder.SetInsertPoint(trueBB);
  builder.CreateRet(CONST(1));
// when false
  builder.SetInsertPoint(falseBB);
  builder.CreateRet(CONST(0));
  builder.ClearInsertionPoint();

  module->print(outs(), nullptr);
  delete module;
  return 0;


}