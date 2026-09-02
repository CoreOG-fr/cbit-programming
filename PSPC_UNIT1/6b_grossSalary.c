/*
    program to calculate gross salary from basic pay
    HRA is 40% of basic, DA is 20% of basic, TA is 10% of basic
    gross = basic + HRA + DA + TA
*/

#include <stdio.h>

int main() {
    float basicPay, hra, da, ta, grossSalary;

    printf("Enter Basic Pay: ");
    scanf("%f", &basicPay);

    hra = 0.40 * basicPay;
    da = 0.20 * basicPay;
    ta = 0.10 * basicPay;

    grossSalary = basicPay + hra + da + ta;

    printf("HRA (40%% of Basic) = %.2f\n", hra);
    printf("DA  (20%% of Basic) = %.2f\n", da);
    printf("TA  (10%% of Basic) = %.2f\n", ta);
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}
