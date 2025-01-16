// #include <errno.h>
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
//     FILE *fp;
//     fp = fopen(argv[1], "w");
//     if (fp == NULL) {
//         fprintf(stderr, "%s\n", strerror(errno));
//         return errno;
//     }
//     printf("file exist\n");
//     fclose(fp);
//     return 0;
// }


#include<stdio.h>
#include<errno.h>
void main( int argc,char *argv)
{
    FILE *fp;
    fp=fopen(argv[1],"w");
    if ((fp==NULL))
    {
        fprintf(stderr,"%d\n",strerror(errno));
        return errno;
    }
    printf("FILE NO EXIT");
    fclose(fp);
}