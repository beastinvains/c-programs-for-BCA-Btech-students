#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str); // reads string input

    len = strlen(str); // find length of string

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1; // means not palindrome
            break;
        }
    }

    if(flag == 0)printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}
