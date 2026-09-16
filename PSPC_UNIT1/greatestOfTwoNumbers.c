/*
    program to print the greatest of 2 numbers
    u enter two numbers and it prints the bigger one
    if both are same it says that too
*/

#include <stdio.h>

int main() {
    int numA, numB;

    printf("Enter first number: ");
    scanf("%d", &numA);

    printf("Enter second number: ");
    scanf("%d", &numB);

    if (numA > numB) {
        printf("%d is the greatest number\n", numA);
    } else if (numB > numA) {
        printf("%d is the greatest number\n", numB);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
