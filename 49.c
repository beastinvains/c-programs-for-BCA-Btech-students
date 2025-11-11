#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int num, i;

    // open files in write mode
    evenFile = fopen("evenfile.txt", "w");
    oddFile = fopen("oddfile.txt", "w");

    printf("Enter 20 numbers:\n");

    for(i = 0; i < 20; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            fprintf(evenFile, "%d\n", num);  // write to even file
        else
            fprintf(oddFile, "%d\n", num);   // write to odd file
    }

    printf("\nNumbers have been saved successfully in 'evenfile.txt' and 'oddfile.txt'.\n");

    // close files
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
