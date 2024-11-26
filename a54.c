//  C Program to merge contents of two files into a third file

#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char file1_name[100], file2_name[100], file3_name[100];
    char ch;

    printf("Enter the first file name: ");
    scanf("%s", file1_name);
    printf("Enter the second file name: ");
    scanf("%s", file2_name);
    printf("Enter the merged file name: ");
    scanf("%s", file3_name);

    file1 = fopen(file1_name, "r");
    file2 = fopen(file2_name, "r");
    file3 = fopen(file3_name, "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Files merged successfully.\n");
    return 0;
}
