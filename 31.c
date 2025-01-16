#include <stdio.h>
void main ()
{
    char ch;  /* May cause problems */  
    while ((ch = getchar()) != EOF) 
    {
        putchar(ch); 
    }
}