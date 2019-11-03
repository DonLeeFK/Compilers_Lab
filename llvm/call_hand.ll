; ModuleID = 'call'
source_filename = "call.c"

define i32 @callee(i32) #0{
    %2 = mul nsw i32 %0,2
    ret i32 %2;reture 2*a
}

define i32 @main() #0{
    %1 = call i32 @callee(i32 10)
    ret i32 %1
}