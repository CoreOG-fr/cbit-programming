#include <stdio.h>

int main() {
    float a, b, q;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Cannot divide by zero\n");


    }
    else {
        q = a / b;
        printf("Quotient = %.2f\n", q);


    }

    return 0;


}
