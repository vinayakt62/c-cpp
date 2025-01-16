#include <stdio.h>
#define concat1(a, b,c)  a##b##c
int main(void)
{
    int xyz = 1234;

     printf("%d\n", concat1(x, y, z));

     printf("%d\n", xyz);
     
    //printf("%d\n", concat1(z,x,y));

    printf("%d\n", concat1(10, 20,30));
    return 0;
}