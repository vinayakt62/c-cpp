#include <stdio.h> 
// #define get_name(var) #var
// void main()
// {
//     int myvar;
//     printf("%s\n",get_name(myvar));
// } 

// #define get_name(var ,str) sprintf(str,"%s", #var)
// void main ()
// {
//     int myvar;
//     char str[20];
//     get_name(myvar,str);
//     printf("%s\n",str);    
// }

#define  STR 1, \
2, \
3
void main ()
{
    int arr[]={STR};
    printf("Element  Of Arr ");
    for(int i=0 ; i<3 ; i++)
    {
         printf("%d\n",arr[i]);
    } 
}