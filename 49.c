#include<stdio.h>
void main()
{  
   int DEMO[5];
   DEMO[0]=1;
   DEMO[1]=2;
   DEMO[2]=3;
   DEMO[3]=4;
   DEMO[4]=5;

    float arr[5];
    for (int i=0; i<5 ;i++)
    {
        arr[i]= (float) i *2.1;
    }

    for (int i=0; i<5 ;i++)
    {
         printf("Size  %f \n",arr[i]);
    }
}