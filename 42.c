#include<stdio.h>
void fun1();
void fun2();

//void __attribute__((constructor)) fun1();
//void __attribute__((destructor)) fun2();
void __attribute__((constructor)) fun1();
void __attribute__((destructor)) fun2();
void fun1()
{
    printf("\n #pragma starup");
}
void fun2()
{
    printf("\n  #pragma exit");
}    
void main()
{
    void fun1();
    void fun2();
    printf("\n void main");
}