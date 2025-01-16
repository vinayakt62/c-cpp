#include<stdio.h>

int *fun()
{
    int i = 5;
    return &i;
} 
int fun1()
{
    int i = 5;
    return i;
} 
int fun2(int *k)
{
    int j = 50;
    *k = j;
} 
int *fun4()
{
    static int i = 100;
    return &i;
} 

void main()
{
    int *p = fun();
    int j = fun1();
    static int k;
    int *l =  fun4();
    fflush(stdin);
    fun2(&k);
    printf("Number %d\n",&p);
    printf("Number %d\n",j);
    printf("Number %d\n",k);
    printf("Number %d\n",*l);
}