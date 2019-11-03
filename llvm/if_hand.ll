; ModuleID = 'if.c'
source_filename = "if.c"

define i32 @main() #0{
    %1 = alloca i32, align 4
    %2 = alloca i32, align 4
    store i32 1, i32* %1, align 4
    store i32 2, i32* %2, align 4
    %3 = load i32, i32* %1, align 4; store integer 1
    %4 = load i32, i32* %2, align 4; store integer 2
    %5 = icmp slt i32 %3, %4;compare 1 and 2
    br i1 %5, label %true, label %false
true:
    ret i32 1
false:
    ret i32 0

}