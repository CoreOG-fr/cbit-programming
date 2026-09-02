/*
    program to multiply two numbers
    reads two numbers from user and prints the product
*/

#include <stdio.h>

int main() {
    int numA, numB, product;

    printf("Enter first number: ");
    scanf("%d", &numA);

    printf("Enter second number: ");
    scanf("%d", &numB);

    product = numA * numB;

    printf("Product = %d\n", product);

    return 0;
}
