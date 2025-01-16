#include <stdio.h>
#define show(s) #s 
#define show1(d) #d
#define show2(d) #d
void main()
{
    printf(show(VINAYAK));
    printf(show1(123));
    printf(show2(123.1213));
}