#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    long long s = 0;

    printf("Enter order of square matrix (1 to 10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Invalid matrix size\n");
        return 0;


    }
    printf("Enter elements of matrix a:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);


        }


    }

    for (i = 0; i < n; i++) {
        s = s + a[i][i];


    }
    printf("Trace of matrix = %lld\n", s);

    return 0;


}
