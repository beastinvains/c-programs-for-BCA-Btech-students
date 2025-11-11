#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2], T[2][2];
    int i, j, choice;

    printf("Enter elements of first 2x2 matrix (A):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second 2x2 matrix (B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nChoose operation:\n");
    printf("1. Addition\n2. Multiplication\n3. Transpose (of first matrix)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nResult of Matrix Addition:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\nResult of Matrix Multiplication:\n");
            C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
            C[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
            C[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
            C[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];

            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\nTranspose of First Matrix:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    T[i][j] = A[j][i];
                    printf("%d ", T[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
