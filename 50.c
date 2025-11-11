#include <stdio.h>
#include <math.h>

int main() {
    char hex[20];
    int i, length, decimal = 0, binary[100], index = 0;
    int value, power = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Step 1: Find length of string
    for(length = 0; hex[length] != '\0'; length++);

    // Step 2: Convert Hexadecimal to Decimal
    for(i = length - 1; i >= 0; i--) {
        if(hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - 48;       // ASCII of '0' = 48
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 55;       // 'A' = 65, so 65 - 55 = 10
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 87;       // 'a' = 97, so 97 - 87 = 10
        else {
            printf("Invalid hexadecimal digit: %c\n", hex[i]);
            return 0;
        }

        decimal += value * pow(16, power);
        power++;
    }

    // Step 3: Convert Decimal to Binary
    while(decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    // Step 4: Display Binary number
    printf("Binary equivalent: ");
    for(i = index - 1; i >= 0; i--)
        printf("%d", binary[i]);

    printf("\n");

    return 0;
}
