#include<stdio.h>
void show()
{
    int x=10;
    auto int y=30;
    x=x+10;
    y=y+10;
    printf("%d \n", x );
    printf("%d \n", y );
  
} 
void main()
{
    printf("show 1\n");
    show();
    printf("show 2\n");
    show();
}