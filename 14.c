#include <stdio.h>
enum deta{demo,demo1,demo2,demo3,demo4,demo5};
//enum deta1{01,10,20,30,40,50};
enum deta1{"01","10","20","30","40","50"};
void main()
{
    enum deta dt;
    dt=demo5;
    printf("%d",dt); 
    
    enum deta1 dt1;
    dt1=40;
    printf("%d",dt1); 

}