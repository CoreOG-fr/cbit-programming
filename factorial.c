/*
    program to print the factorial of a number
    u enter n and it prints n!
    factorial means 1 * 2 * 3 * ... * n
    and factorial of 0 is 1
*/

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
