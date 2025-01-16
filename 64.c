#include<stdio.h>
void num(int *i)
{
    printf("| %5d|\n",*i) ;
    *i=(*i+1);
    printf("| %5d|\n",*i) ;

}
void main ()
{

    static int i=10;
    printf("Enter No | %5d|\n") ;
    printf("Enter No | %5d|\n",i) ;
    num(&i);
    printf("Enter No | %5d|\n",i) ;
}