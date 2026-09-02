/*
    program to print company bonus on salary
    bonus is 20% of the salary
    u enter the salary and it shows the bonus amount
*/

#include <stdio.h>

int main() {
    float salary, bonus;

    printf("Enter your Salary: ");
    scanf("%f", &salary);

    bonus = 0.20 * salary;

    printf("Bonus (20%% of Salary) = %.2f\n", bonus);
    printf("Total Salary with Bonus = %.2f\n", salary + bonus);

    return 0;
}
