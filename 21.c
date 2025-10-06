#include <stdio.h>
void main() {
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z')) {
        printf("it is alphabet");
    } else if (ch >= '0' && ch <= '9') {
        printf("it is a digit");
    } else {
        printf("it is a special character");
    }
}