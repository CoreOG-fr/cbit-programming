#include <stdio.h>

int main() {
    float sal, b;

    printf("Enter your Salary: ");
    scanf("%f", &sal);

    b = 0.20 * sal;

    printf("Bonus (20%% of Salary) = %.2f\n", b);
    printf("Total Salary with Bonus = %.2f\n", sal + b);

    return 0;


}
