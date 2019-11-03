## lab3-0实验报告

姓名 李岸宜

学号 PB17111567

### 实验要求

本次实验要求手工将.c文件翻译成中间代码.ll文件，同时编写一个.cpp来自动生成.ll文件。

### 实验结果

所有的`*.c`中的`int main`都对应`*_generator.cpp`中的`mainFun`

##### if.c

```c++
auto trueBB = BasicBlock::Create(context, "trueBB", mainFun);
//省略中间
builder.SetInsertPoint(trueBB);
builder.CreateRet(CONST(1));
//上述对应
return 1;


auto falseBB = BasicBlock::Create(context, "falseBB", mainFun);
//省略中间
builder.SetInsertPoint(falseBB);
builder.CreateRet(CONST(0));
//上述对应
return 0;
```

##### while.c

```c++
builder.SetInsertPoint(condition);
  aLoad = builder.CreateLoad(aAlloca);
  iLoad = builder.CreateLoad(iAlloca);
  auto icmp = builder.CreateICmpSLT(iLoad, CONST(10));
  builder.CreateCondBr(icmp, loop, done);
//////////对应/////////
while(i < 10)
  
builder.SetInsertPoint(loop);
  auto addi = builder.CreateNSWAdd(iLoad, CONST(1));  // i=i+1
  auto adda = builder.CreateNSWAdd(aLoad, CONST(1));  // a=a+1
  builder.CreateStore(addi, iAlloca);
  builder.CreateStore(adda, aAlloca);//store new value back
  builder.CreateBr(condition);
/////////对应//////////
{
    i = i + 1;
    a = a + i;
}


builder.SetInsertPoint(done);
builder.CreateRet(aLoad);
builder.ClearInsertionPoint();
/////////对应////////
return a;
```

##### call.c

```c++
auto module = new Module("call", context);  // module name是什么无关紧要
//callee
  std::vector<Type *> Ints(1, TYPE32);
  auto calleeFun = Function::Create(FunctionType::get(TYPE32, Ints, false),
                                 GlobalValue::LinkageTypes::ExternalLinkage,
                                 "callee", module);

  // BB的名字在生成中无所谓,但是可以方便阅读
  auto bb = BasicBlock::Create(context, "entry", calleeFun);
  builder.SetInsertPoint(bb);
  std::vector<Value *> args;  //获取gcd函数的参数,通过iterator
  for (auto arg = calleeFun->arg_begin(); arg != calleeFun->arg_end(); arg++) {
    args.push_back(arg);
  }
  auto mul = builder.CreateNSWMul(CONST(2), args[0]);
  builder.CreateRet(mul);
///////////对应///////////
int callee(int a){
  return 2 * a;
}
```



### 实验难点

实验开始时候没有理解数字标号和参数以及标签之间的对应关系，在反复阅读代码之后解决。之后仿照助教所给的代码，顺利完成了实验。

### 实验总结

本次实验让我了解了ll的基本语法，认识到中间代码的与上层代码以及底层汇编之间的联系。
