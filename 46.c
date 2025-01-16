#include <stdio.h>
#define  PI  3.1416
#define  AREA(r)  (PI*(r)*(r))
#define  AREA1(r)  (PI  +r)
int main() {
    float r = 7;    // radius of circle
   // char ch[10] = "15";
    printf("Area of Circle with radius %.0f: %.3f \n", r, AREA(r));
     printf("Area of Circle with radius %.0f: %.3f", r, AREA1(r));
    return 0;
}