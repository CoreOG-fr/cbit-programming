#include <stdio.h>

int main() {
    int a[10][10], t[10][10], r, c, i, j;

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

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            t[j][i] = a[i][j];


        }


    }
    printf("Original matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);


        }
        printf("\n");


    }
    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", t[i][j]);


        }
        printf("\n");


    }

    return 0;


}
