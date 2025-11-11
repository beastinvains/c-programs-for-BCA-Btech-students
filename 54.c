#include <stdio.h>

int main() {
    FILE *fp;
    int num;

    fp = fopen("data.bin", "wb+");  // open binary file for write & read
    if(fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    // Write 5 integers to file
    for(int i = 1; i <= 5; i++)
        fwrite(&i, sizeof(int), 1, fp);

    // Move file pointer to 3rd number (position 2 * sizeof(int))
    fseek(fp, 2 * sizeof(int), SEEK_SET);

    // Read and print the number at that position
    fread(&num, sizeof(int), 1, fp);
    printf("Number at 3rd position: %d\n", num);

    // Show current file pointer position
    printf("Current pointer position (bytes): %ld\n", ftell(fp));

    // Rewind file pointer back to start
    rewind(fp);
    fread(&num, sizeof(int), 1, fp);
    printf("First number after rewind: %d\n", num);

    fclose(fp);
    return 0;
}
