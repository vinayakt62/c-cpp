#include<stdio.h>
int sum(int a ,int b) 
{

    return  a+b;
}

void main()
{
    int (*add_ptr)(int,int)=&sum;
    int res =sum(10,10);
    printf("SUM %d \n",res);
}