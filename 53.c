#include <stdio.h>
void main() {
    FILE *f1, *f2;
    char file1[50], file2[50];
    char ch1, ch2;
    int same = 1;  // assume files are same
    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);
    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    while(1) {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);
        if(ch1 == EOF && ch2 == EOF)
            break;
        if(ch1 != ch2) {
            same = 0;
            break;
        }}
    fclose(f1);
    fclose(f2);
    if(same)printf("Both files are SAME.\n");
    else printf("Files are DIFFERENT.\n");
}
