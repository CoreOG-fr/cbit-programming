/*
    program to print the fibonacci series
    u enter how many terms u want and it prints them
    series starts with 0 and 1
    next term is the sum of the previous two terms
*/

#include <stdio.h>

int main() {
    int n, i, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0\n");
        return 0;
    }

    printf("Fibonacci series up to %d terms: ", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}
