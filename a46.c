// Write a program to find length of string using pointers.

#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length = string_length(str);
    printf("Length of the string: %d\n", length);

    return 0;
}
