/*
    program to convert fahrenheit to celsius
    formula is (fahrenheit - 32) * 5/9
    u enter fahrenheit and it gives u celsius
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}
