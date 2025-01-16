#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[20];
} MyStruct;
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments. Usage: program <id> <name>\n");
        return 1;
    }
    MyStruct myStruct;
    myStruct.id = atoi(argv[1]);
    strncpy(myStruct.name, argv[2], sizeof(myStruct.name));
    printf("Received struct:\n");
    printf("ID: %d\n", myStruct.id);
    printf("Name: %s\n", myStruct.name);
    return 0;
}