
#include <stdio.h>
 
void fun()
{
   printf("\nIn file:%s, function:%s() and line:%d",
           __FILE__, __func__, __LINE__);
 
}

int main()
{
    printf("In file:%s, function:%s() and line:%d",
           __FILE__, __func__, __LINE__);
    fun();
    return 0;
}



// #include <stdio.h>
// fun(int x)
// {
//     return x*x;
// }
// int main(void)
// {
//     printf("%d", fun(10));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void view()
// {
//     return 10;
// }
// int main(void)
// {
//     printf("Ready to begin...\n");
//     view();
//     printf("NOT over till now\n");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// _Noreturn void show()
// {
//     printf("BYE BYE");
// }
// int main(void)
// {
//     printf("Ready to begin...\n");
//     show();
//     printf("NOT over till now\n");
//     return 0;
// }