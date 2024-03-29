## lab2实验报告

姓名 李岸宜

学号 PB17111567

### 实验要求

利用Bison和Lab1得到的token实现对cminus语言的语法分析，生成分析树。

### 实验设计

加入了联合体`SyntaxTreeNode * node，传递lab1生成的token`。并且修改lab1中的文件，在token执行的动作中加入`yylval.node=newSyntaxTreeNode(yytext)`来传递终结符。

### 实验结果

实验结果，利用diff函数与助教所给的的语法树相比，除了文件夹中的`.gitkeep`文件，其他都一样。初步认为实验成功。

### 实验难点

本实验中最难解决的问题都与实验“语法分析”无关。最为棘手的是段错误。因为很多错误都可以造成段错误，而段错误报错又不给出错误位置。所以只能逐行调试代码，费时费力。其次是，我遇到了一些助教所写的头文件中bug，`syntax_analyzer.h`中出现了一些未定义的东西，在make的过程中持续报错，困扰了我很久，直到我找到了问题所在。这样的“帮助教debug”大概还有两三例，由于代码较为底层，我也不是很能明白。最后还有遇到git的一些问题，最后逐条在stack overflow等网站找到了解决答案。

### 实验总结

本实验实现了对cminus的语法分析，实际效果不错，也令我掌握了bison的一些基本语法。但是对于flex和bison之间到底如何进行交互，甚至yylval这个函数的定义我都没有搞清楚，都由助教进行了完成。

### 实验反馈

希望助教日后能对各个头文件，以及其他需要依赖的代码有更多的注释，更加方便与理解。还有希望对实验步骤能有更清楚的解释。比如在开始实验的时候，我甚至还不知道需要对lab中的文件进行进一步修改来完成该实验。直到我耗费两天读完了所有代码才略微有了头绪。还有希望助教的tutorial不要简单给一个例子，而是能讲解基本的语法和原理。对实验本身原理也希望助教有所讲解，这样更有助于我们去理解实验，也能学到更多。

