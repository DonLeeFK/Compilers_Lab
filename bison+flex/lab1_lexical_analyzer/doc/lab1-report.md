## Lab1 Rport

### Regular Expr Design

###### Comment

Comment is easy to handle due to the fact that is has very distinguishable marks at both start and end, and the contents in bettween are irrelevant. So I come up with this design `"\*"(.)*"*\"`.

I tested cases like `/*/*(content)*/`, `/* (content)*/*/` and no disorder was found.

###### Identifiler

According to the regulation on Cminus variables, which the starting symbol has to be letter or dash, so the only problem is to analyze the starting symbol and remaining symbols separately. Referring to the solution given by the textbook, I used `[a-zA-Z_]([a-zA-Z0-9_])`.

###### Others

Others are mostly trivial.

### Problem Encountered

The most tricky problem I encounterd is neither the use of Flex nor regular expressions, but rather `getAllTestcase`. I didn't sort it out for a whole day until my roommate mationed me the usage of the given header `direct.h`. And the instructions and tutorials offered by TA are rather vague and ambiguous, reflected in few information was given in *Flex简单使用*. 

### Total Time Comsumption

Due to my personal incompetence, I stucked in the file manegment part. So Total time comsumption escalated to nearly 2 days. But actual time working on it (with the file part excluded), is about 2 hour, which consists of 60 mins of tutorial (mostly flex) learning, 30 mins of coding and 30 mins of debugging.

