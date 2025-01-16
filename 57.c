#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r=3, c=4,sum=0;
    int *ptr = malloc((r*c) * sizeof(int));
    for(int i=0; i< r*c ;i++)
    {
        ptr[i]=i+1;
    }
    for( int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%5d",ptr[i*c+j]);
            sum+= sizeof(ptr);
        }   
        printf("\n");

    }
    printf("%5ld",sizeof(ptr));
    printf("%5d",sum); // 8 * 12 = 96
    free(ptr);
} 
