#include<stdio.h>
void main( int argc , char *argv)
{  

    if(argc != 5)
    {   
        printf("Size  int argc not in 5  \n"); 
    } 
    else
    {
        int DEMO[5];
        DEMO[0]=atoi(argv[0]);
        DEMO[1]=atoi(argv[1]);
        DEMO[2]=atoi(argv[2]);
        DEMO[3]=atoi(argv[3]);
        DEMO[4]=atoi(argv[4]);

        for (int i = 0; i < argc; i++)
        {
           printf("Size    DEMO[0]  %lu \n",sizeof(main())); 
        }
        

    }

//     int arr[5];
//     char ch[5]; 
//     printf("Size  of main %lu \n",sizeof(main())); 
//     printf("Size  of int arr[5] %lu \n",sizeof(arr));
//     printf("Size  of int ch[5] %lu \n",sizeof(ch));
//     //arr[5] = {1,2,3,4,5}; NOT WORK
//    int arr1[] = {1, 2, 3, 4, 5};
//    int DEMO[5];
//    DEMO[0]=1;
//    DEMO[1]=2;
//    DEMO[2]=3;
//    DEMO[3]=4;
//    DEMO[4]=5;
}