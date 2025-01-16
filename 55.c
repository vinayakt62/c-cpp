
#include <stdio.h>
#include <string.h>

void disp(char *str)
{
    printf("\n%s", str);
    printf("\n%u", str[0]);
}
int main()
{

    // char arr[10],*arr1= "Vrthw";
    // strcpy(arr,arr1);
    // disp(arr);
    // disp(arr1);
    // printf("arr address: %u", arr1[0]);


    int a[][][2] = { {{1, 2}, {3, 4}},
                   {{5, 6}, {7, 8}}
                 };  // error

    // int arr[3] = { 1, 2, 3 };
    // printf("Some Garbage Value: %d", arr[5]);
    // printf("\nSome Garbage Value: %d", arr[5000]);
     return 0;
}