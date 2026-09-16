/*
    program to print the sum of numbers from 1 to n
    u enter n and it adds 1 + 2 + 3 + ... + n
    uses a loop and a sum variable
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
