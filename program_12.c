#include <stdio.h>
//reverse a string without using library functions
int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);   // take input

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Print string in reverse
    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}