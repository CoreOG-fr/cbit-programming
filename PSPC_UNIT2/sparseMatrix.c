#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, z = 0;

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
            if (a[i][j] == 0) {
                z++;


            }


        }


    }
    if (z > r * c / 2) {
        printf("The matrix is sparse\n");


    }
    else {
        printf("The matrix is not sparse\n");


    }

    return 0;


}
