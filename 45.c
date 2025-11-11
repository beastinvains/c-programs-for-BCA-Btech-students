#include <stdio.h>

int main() {
    int arr[5]={12,45,23,45,2}, i, j, temp, num, found = 0;

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nNumbers in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Ask user for number to search
    printf("\n\nEnter a number to search: ");
    scanf("%d", &num);

    // Search number in array
    for(i = 0; i < 5; i++) {
        if(arr[i] == num) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Number not found in the array.\n");

    return 0;
}

