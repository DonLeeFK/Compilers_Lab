; ModuleID = 'while.c'
source_filename = "while.c"

define i32 @main() #0{
    %1 = alloca i32, align 4;declare a
    %2 = alloca i32, align 4;declare i
    store i32 10, i32* %1, align 4;assign a
    store i32 0, i32* %2, align 4;iassign i
    br label %condition
condition:
    %3 = load i32, i32* %1, align 4; store integer a
    %4 = load i32, i32* %2, align 4; store integer i
    %5 = icmp slt i32 %4, 10;compare i and 10
    br i1 %5, label %loop, label %done
loop:
    %6 = add nsw i32 %4, 1;i=i+1
    store i32 %6, i32* %2, align 4;store back
    %7 = add nsw i32 %3, 1;a=a+1
    store i32 %7, i32* %1, align 4;store back
    br label %condition
done:
    %8 = load i32, i32* %1, align 4; store integer a
    ret i32 %8
}