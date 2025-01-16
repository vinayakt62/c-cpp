// #include<stdio.h>
// void main()
// {
//     int arr[3]={1,2};
//     arr[2] = "vin";
       
//     printf("\1 IS : %d \n",arr[0]);
//     printf("\2 IS : %d \n",arr[1]);
//    // printf("\3 IS : %s \n",arr[3]);
// }


#include <stdio.h>
int main()
{
    int arr[3] = { 1, 2 };
    arr[2] = 'G';
    printf("Array[1]: %d\n", arr[0]);
    printf("Array[2]: %d\n", arr[1]);
    printf("Array[3]: %s", arr[2]);
    return 0;
}