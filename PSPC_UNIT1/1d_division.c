/*
    program to divide two numbers
    makes sure u dont divide by zero coz that causes problems
*/

#include <stdio.h>

int main() {
    float numA, numB, quotient;

    printf("Enter first number: ");
    scanf("%f", &numA);

    printf("Enter second number: ");
    scanf("%f", &numB);

    if (numB == 0) {
        printf("Cannot divide by zero\n");
    } else {
        quotient = numA / numB;
        printf("Quotient = %.2f\n", quotient);
    }

    return 0;
}
