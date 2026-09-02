/*
    program to add two numbers
    u enter two numbers and it prints the sum
*/

#include <stdio.h>

int main() {
    int numA, numB, sum;

    printf("Enter first number: ");
    scanf("%d", &numA);

    printf("Enter second number: ");
    scanf("%d", &numB);

    sum = numA + numB;

    printf("Sum = %d\n", sum);

    return 0;
}
