//  C Program to copy contents of one file to another file 

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char src_file[100], dest_file[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", src_file);
    printf("Enter destination file name: ");
    scanf("%s", dest_file);

    source = fopen(src_file, "r");
    if (source == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    destination = fopen(dest_file, "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
}

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Contents copied successfully.\n");
    return 0;
}
