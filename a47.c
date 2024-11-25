// Write a program to copy one string to another using pointer. 

#include <stdio.h>

void copy_string(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    gets(source);

    copy_string(source, destination);
    printf("Copied string: %s\n", destination);

    return 0;
}
