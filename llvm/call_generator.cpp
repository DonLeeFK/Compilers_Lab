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
  auto module = new Module("call", context);  // module name是什么无关紧要
//callee
  std::vector<Type *> Ints(1, TYPE32);
  auto calleeFun = Function::Create(FunctionType::get(TYPE32, Ints, false),
                                 GlobalValue::LinkageTypes::ExternalLinkage,
                                 "callee", module);

  // BB的名字在生成中无所谓,但是可以方便阅读
  auto bb = BasicBlock::Create(context, "entry", calleeFun);
  builder.SetInsertPoint(bb);
  std::vector<Value *> args;  //获取callee函数的参数,通过iterator
  for (auto arg = calleeFun->arg_begin(); arg != calleeFun->arg_end(); arg++) {
    args.push_back(arg);
  }
  auto mul = builder.CreateNSWMul(CONST(2), args[0]);
  builder.CreateRet(mul);//return 2*a

  auto mainFun = Function::Create(FunctionType::get(TYPE32, false),
                                  GlobalValue::LinkageTypes::ExternalLinkage,
                                  "main", module);
  bb = BasicBlock::Create(context, "entry", mainFun);
  // BasicBlock的名字在生成中无所谓,但是可以方便阅读
  builder.SetInsertPoint(bb);
  auto call = builder.CreateCall(calleeFun, {CONST(10)});
  builder.CreateRet(call);//call callee

  module->print(outs(), nullptr);
  delete module;
  return 0;

}