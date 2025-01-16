#include<stdio.h>
void print_no(const char* str)
{
   //str[0]='R';
  printf("%s", str);
}
void main()
{
    
    auto int i;
     const char arr[10]="Vinayak";
    printf("%d\n" , i ); 
    const int j=10;
    printf("%d\n" , j ); 
    print_no(arr);
    
}

