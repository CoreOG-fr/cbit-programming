#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, n, amt, ci;

    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    printf("Enter number of times interest compounded per year: ");
    scanf("%f", &n);

    r = r / 100;
    amt = p * pow((1 + r / n), n * t);
    ci = amt - p;

    printf("Total Amount = %.2f\n", amt);
    printf("Compound Interest = %.2f\n", ci);

    return 0;


}
