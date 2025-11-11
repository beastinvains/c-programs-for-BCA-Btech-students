#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int choice, n;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    do {
        printf("\n--- STRING MENU ---\n");
        printf("1. Calculate length\n");
        printf("2. Concatenate strings\n");
        printf("3. Copy string\n");
        printf("4. Compare strings\n");
        printf("5. Copy n characters\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to clear newline

        switch(choice) {
            case 1:
                printf("Length of str1 = %lu\n", strlen(str1));
                printf("Length of str2 = %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(str3, str1);
                strcat(str3, str2);
                printf("Concatenated string = %s\n", str3);
                break;

            case 3:
                strcpy(str3, str1);
                printf("Copied string = %s\n", str3);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are SAME\n");
                else
                    printf("Strings are DIFFERENT\n");
                break;

            case 5:
                printf("Enter number of characters to copy: ");
                scanf("%d", &n);
                strncpy(str3, str1, n);
                str3[n] = '\0'; // to end string properly
                printf("Copied %d characters: %s\n", n, str3);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 6);

    return 0;
}

