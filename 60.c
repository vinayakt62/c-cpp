#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void sum1(char *str1)
{
    //str1[1]= "5";
     printf("sun2 : %s",str1);
}


void main()
{
    char str[]="VIN";
     printf("sun2 : %s",str);
    sum1(str);
    printf("sun2 : %s",str);

}