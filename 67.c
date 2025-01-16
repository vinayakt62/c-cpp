#include<stdio.h>
void a()
{
    printf("Welcome to a");
    printf("In file:%s, function:%s() and line:%d\n",__FILE__, __func__, __LINE__);
}
void b( void (*ptr)())
{
    (*ptr)();
     printf("In file:%s, function:%s() and line:%d\n",__FILE__, __func__, __LINE__);
}
void main()
{
    void (*ptr)()=&a;
    printf("In file:%s, function:%s() and line:%d\n",__FILE__, __func__, __LINE__);
    b(ptr);
}