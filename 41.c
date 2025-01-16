#include<stdio.h>
void fun1();
void fun2();

#pragma startup fun1
#pragma exit fun2

void fun1()
{
    printf("#pragma starup");
}
void fun2()
{
    printf("#pragma exit");
}    
void main()
{
    void fun1();
    void fun2();
    printf("void main");
}