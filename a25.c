// // Write a program to accept a string and count the number of vowels present in this String 

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    // char vowel[] = {"a","e","i","o","u"};
    int length = strlen(str);
    int c = 0;
   
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            c++;
        }
    }
   printf("Total vowel = %d",c);
   
    
    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = tolower(str[i]);
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             count++;
//         }
//     }

//     printf("Number of vowels: %d\n", count);
//     return 0;
// }
