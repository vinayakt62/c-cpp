#include<stdio.h>

#define gfg 7
#if gfg > 200
   #undef gfg
   #define gfg 200
#elif gfg < 50
   #undef gfg
   #define gfg 50
#else
   #undef gfg
   #define gfg 100
#endif
 
void  main()
{
  printf("Ans is %d",gfg);
}  