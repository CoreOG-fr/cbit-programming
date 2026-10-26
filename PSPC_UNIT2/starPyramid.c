#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows (1 to 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Please enter rows from 1 to 20\n");
        return 0;


    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");


        }
        for (j = 1; j <= i; j++) {
            printf("*   ");


        }
        printf("\n");


    }

    return 0;


}
