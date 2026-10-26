#include <stdio.h>

int main() {
    int a[10][10], b[10][10], s[10][10], r, c, i, j;

    printf("Enter rows and columns (1 to 10): ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid matrix size\n");
        return 0;


    }
    printf("Enter elements of matrix a:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);


        }


    }
    printf("Enter elements of matrix b:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);


        }


    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];


        }


    }
    printf("Sum of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", s[i][j]);


        }
        printf("\n");


    }

    return 0;


}
