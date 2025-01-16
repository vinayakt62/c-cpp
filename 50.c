#include <stdio.h>
void main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9} ;
    printf ("\n Print  \n"); 
    for(int i=0;i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            printf (" %d ",arr[i][j]); 
        }      
        printf ("\n");
    }
    printf ("\n Print  \n"); 
    int col[4] ={0,0,0,0};
    for(int i=0;i<3; i++)
    {
        int row=0; 
        for(int j=0;j<3; j++)
        {
            printf ("%5d",arr[i][j]); 
            row+= arr[i][j];
            col[j]= col[j] + arr[i][j];
        }     
        col[3] = col[3] + row;
        printf("%5d\n",row);
    }

    for(int i=0;i<4; i++)
    {
        printf ("%5d",col[i]); 
    }
    printf ("\n");
}