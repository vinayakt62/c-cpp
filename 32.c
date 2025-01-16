#include <stdio.h>
int main()
{
    int i, n = 2;
    char str[500];
    FILE* fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Could not open file");
        return 0;
    }
    for (i = 0; i < n; i++) {
        puts("Enter a name");
        gets(str);
        fprintf(fptr, "%d.%s\n", i, str);
    }
    fclose(fptr);
    return 0;
}