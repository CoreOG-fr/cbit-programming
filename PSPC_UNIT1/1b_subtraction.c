/*
    program to subtract two numbers
    takes two numbers from the user and prints the difference
*/

#include <stdio.h>

int main() {
    int numA, numB, diff;

    printf("Enter first number: ");
    scanf("%d", &numA);

    printf("Enter second number: ");
    scanf("%d", &numB);

    diff = numA - numB;

    printf("Difference = %d\n", diff);

    return 0;
}
