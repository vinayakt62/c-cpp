#include <stdio.h>
void show()
{
    int x =10;
    static int y =30;
    x=x+10;
    y=y+10;
    printf("int Local x %d \n",x);
    printf("int Static y %d \n",y); 
} 
void main ()
{
    printf("1 show");
    show();
    printf("2 show");
    show();
    printf("3 show");
    show();
}