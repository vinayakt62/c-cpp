    #include<stdio.h>
    int  main(int argc ,char **argv) 
    {
        printf("int argc : %d" ,argc);
        for(int j = 0 ; j < argc; j++)
        {
          printf("%s \n", argv[j]); 
        }
        return 0;
    } 

    // #include <stdio.h>
    // int main(int argc, char **argv)
    // {
    //     printf("The value of argc is %d\n", argc);
    //     for (int i = 0; i < argc; i++) {
    //         printf("%s \n", argv[i]);
    //     }
    //     return 0;
    // }
