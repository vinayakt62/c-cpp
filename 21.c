#include<stdio.h>
void main()
{
    int x=10;
    int y=20;
    printf("int x %d \n",x);
    printf("int y %d \n",y);
    {
        int x=101;
        x++;
        y++;
        printf("int x 2 %d \n",x);
        printf("int y 2 %d \n",y);
    }

}