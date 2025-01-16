// #include <stdio.h>

// void my_function() __attribute__((constructor));

// void my_function() {
//     printf("This function runs before main()\n");
// }
//This function runs before main()

// #include<stdio.h>    
// #define start main    
// void start() {    
//    printf("Hello");    
// }   


#include<stdio.h>
#define begin(m,a,i,n) m##a##i##n
#define start begin(m,a,i,n)
 
void start() {
printf("Geeksforgeeks");
}

