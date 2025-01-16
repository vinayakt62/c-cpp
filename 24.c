#include<stdio.h>
void main()
{
    int val=30;
    double val1=5.5;
    void* ptr=&val;
    void* ptr1=&val1;
    printf("%d \n",*(int*)ptr);
    printf("%lf \n",*(double*)ptr1);
}