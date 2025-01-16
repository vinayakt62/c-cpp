#include <stdio.h>
#define Marg(a,b) a##b
void main ()
{
printf("%d",Marg(10,20));

}  