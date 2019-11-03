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
  auto module = new Module("while", context);  // module name是什么无关紧要
  auto mainFun = Function::Create(FunctionType::get(TYPE32, false),
                                  GlobalValue::LinkageTypes::ExternalLinkage,
                                  "main", module);
  auto bb = BasicBlock::Create(context, "entry", mainFun);// BasicBlock的名字在生成中无所谓,但是可以方便阅读
  builder.SetInsertPoint(bb);
  auto aAlloca = builder.CreateAlloca(TYPE32);
  auto iAlloca = builder.CreateAlloca(TYPE32);

  builder.CreateStore(CONST(10), aAlloca);
  builder.CreateStore(CONST(0), iAlloca);

  auto aLoad = builder.CreateLoad(aAlloca);
  auto iLoad = builder.CreateLoad(iAlloca);

  auto condition = BasicBlock::Create(context, "condition", mainFun);
  auto loop = BasicBlock::Create(context, "loop", mainFun);
  auto done = BasicBlock::Create(context, "done", mainFun);
  builder.CreateBr(condition);
//condition: while(i<10)
  builder.SetInsertPoint(condition);
  aLoad = builder.CreateLoad(aAlloca);
  iLoad = builder.CreateLoad(iAlloca);
  auto icmp = builder.CreateICmpSLT(iLoad, CONST(10));
  builder.CreateCondBr(icmp, loop, done);

  builder.SetInsertPoint(loop);
  auto addi = builder.CreateNSWAdd(iLoad, CONST(1));  // i=i+1
  auto adda = builder.CreateNSWAdd(aLoad, CONST(1));  // a=a+1
  builder.CreateStore(addi, iAlloca);
  builder.CreateStore(adda, aAlloca);//store new value back
  builder.CreateBr(condition);

  builder.SetInsertPoint(done);
  builder.CreateRet(aLoad);
  builder.ClearInsertionPoint();

  module->print(outs(), nullptr);
  delete module;
  return 0;




}