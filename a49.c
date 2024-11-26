// Write a program to compare two strings using pointers.

#include <stdio.h>

int compare_strings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2; // Handles case where lengths are different
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    int result = compare_strings(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is smaller than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
}

