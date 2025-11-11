#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2; // pointer variables

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // assign addresses to pointers
    p1 = &a;
    p2 = &b;

    printf("\nAddition = %d", (*p1 + *p2));
    printf("\nSubtraction = %d", (*p1 - *p2));
    printf("\nMultiplication = %d", (*p1 * *p2));

    if(*p2 != 0) // to avoid division by zero
        printf("\nDivision = %.2f\n", (float)(*p1) / (*p2));
    else
        printf("\nDivision not possible (denominator is 0)\n");

    return 0;
}
