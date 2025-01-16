#include<stdio.h>
void main ()
{

    int j=1;
    j++;
    const int i=j++;
    j++;
    printf(" print number I :%d" ,i) ;
    printf(" print number J:%d" ,j) ;
}