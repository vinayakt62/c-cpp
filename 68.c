 #include<stdio.h>
 void main()
 {
    int var =10;
    int *ptr;
    ptr=&var;
    printf("\n val ptr %p",ptr);
    printf("\n val val %d",var);
    printf("\n val ptr %d",*ptr);
    printf("\n val ptr %d",&var);
       printf("\n val ptr %d",(int *)&var);
 }