
#include <stdio.h>
 
int main() {
    int count = 0;
    do {
        printf("%d\n", count); // Print the current value of count
        count++;               // Increment count by 1
    } while (count < 5);        // Continue looping as long as count is less than 5
    return 0;
}
