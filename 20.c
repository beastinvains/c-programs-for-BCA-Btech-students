#include <stdio.h>
void main() {
    char ch;
    scanf("%c", &ch);
    if (ch== 'a' || ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') {
        printf("it's a vowel.");
    } else {
        printf("it's a consonant.");
    }
}