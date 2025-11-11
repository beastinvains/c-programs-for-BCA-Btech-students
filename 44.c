#include <stdio.h>
int main() {
    float marks[50], sum = 0.0, average;
    int i;

    printf("Enter marks of 50 students:\n");
    for(i = 0; i < 50; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    sum /= 50;

    printf("\nAverage marks of the class = %.2f\n", average);

    return 0;
}
