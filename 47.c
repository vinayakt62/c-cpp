#include <stdio.h>
#define MICRO(num , str )do {\
    printf("%d ",num);\
    printf("is ");\
    printf("%s number",str);\
    printf("\n");\
}while (0)
void main()
{
    int num;
    scanf("%d",&num);
    if(num & 1)
    {
        MICRO(num,"ODD");
    }
    else
    {
        MICRO(num,"EVEN");
    }
}

