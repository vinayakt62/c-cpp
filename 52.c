#include<stdio.h>
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int a = arr[0];
    
    printf("\nPRINT INT ARR\n");
    for(int i=0;i<10;i++)
    {
        printf("%5d",arr[i]);
    }   

    for(int i=0;i<10;i++)
    {
        if(a<arr[i])
            a = arr[i];
    }    
    printf("\nMAX IS : %d \n",a);

}