#include<stdio.h>
void main()
{
    int i=1;
    int j=1;
    printf("\n I %d",i);
    printf("\n J %d",j);
    i++;
    j++;
    printf("\n I %d",i);
    printf("\n J %d",j);
    ++i;
    ++j;
    printf("\n I %d",i);
    printf("\n J %d",j);

    printf("\n I %d",++i);
    printf("\n J %d",++j);

    printf("\n I %d",i++);
    printf("\n J %d",j++);

    printf("\n");
}