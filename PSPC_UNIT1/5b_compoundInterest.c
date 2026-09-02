/*
    program to calculate compound interest
    formula is A = P * (1 + r/n)^(n*t)
    then CI = A - P
    u give principal, rate, time, and number of times interest is compounded
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, n, amount, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest compounded per year: ");
    scanf("%f", &n);

    rate = rate / 100;

    amount = principal * pow((1 + rate / n), n * time);

    compoundInterest = amount - principal;

    printf("Total Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
