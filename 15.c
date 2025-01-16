#include<stdio.h>
extern int a=100;
void main()
{
    //extern int a=100;
    printf("%d\n",a);
    int a=200;
    printf("%d\n",a);
} 

