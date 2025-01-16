#include <stdio.h>

void show(int* i)
{
    printf("|%5d| \n",i[0]);
    printf("|%5d| \n",i[1]);
    printf("|%5d| \n",i[2]);
    printf("|%5d|%5d|%5d| \n",i[0],i[1],i[2]);
}

void show1(int* i)
{
   
    printf("|%5d| \n",i[0]);
   // i += sizeof(int);
    //i++;
    printf("|%5d| \n",i[1]);
    //i += sizeof(int);
    //i++;
    printf("|%5d| \n",i[2]);
 //   i += sizeof(int);
}

void main()
{
    int v[3]={10,100,1000};
    int* ptr;
    ptr=v;
    show1(ptr);
    // for(int i=0;i<3;i++)
    // {
    //     printf("*ptr Val :%d \n",*ptr );
    //     printf(" ptr Val : %p \n", ptr );
    //     ptr++;
    // }
    show(&v);
    
}