//  C Program to count number of lines in a file

#include<stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(file);
    printf("Total number of lines: %d\n", lines);

    return 0;
}
