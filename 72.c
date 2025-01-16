#include<stdio.h>
void main()
{
    int i=100;
    
    float k=100.100;

    void* ptr;

    ptr=&i;
    
    printf("Enter Int Val =%d \n",*((int*)ptr));
    
    ptr=&k;

    printf("Enter float Val =%f \n",*((float*)ptr));

    int *Z =NULL;

    char *ch =NULL;

    printf("Enter Int Val NULL  %d \n",Z);
    
    printf("Enter char Val NULL  %c \n",ch);

    int *iptr;
    int  x=1000;
    iptr=&x;

     printf("Enter char Val NULL  %d \n",*iptr);



}