#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0\n");
        return 0;


    }

    printf("Fibonacci series up to %d terms: ", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;


    }

    printf("\n");

    return 0;


}
