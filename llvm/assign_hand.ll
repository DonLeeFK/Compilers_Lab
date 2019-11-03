; ModuleID = 'assign.c'
source_filename = "assign.c"

define i32 @main() #0{
    %1 = alloca i32, align 4
    store i32 1, i32* %1, align 4
    %2 = load i32, i32* %1, align 4
    ret i32 %2
}