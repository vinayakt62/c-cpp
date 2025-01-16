#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr=(int *)malloc(sizeof(int));
    free(ptr);
    ptr=NULL;
}