/*
    program to find the greatest of 3 numbers
    u enter three numbers and it prints the biggest one
    it just compares them one by one using if
*/

#include <stdio.h>

int main() {
    int numA, numB, numC, greatest;

    printf("Enter first number: ");
    scanf("%d", &numA);

    printf("Enter second number: ");
    scanf("%d", &numB);

    printf("Enter third number: ");
    scanf("%d", &numC);

    greatest = numA;

    if (numB > greatest) {
        greatest = numB;
    }

    if (numC > greatest) {
        greatest = numC;
    }

    printf("Greatest of the 3 numbers = %d\n", greatest);

    if (numA == numB && numB == numC) {
        printf("All 3 numbers are equal\n");
    }

    return 0;
}
