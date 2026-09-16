/*
    program to print the sum of digits of a given integer
    u enter a number like 1234 and it adds 1 + 2 + 3 + 4
    we take out the last digit using % 10 and remove it using / 10
*/

#include <stdio.h>

int main() {
    int number, temp, digit, sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    temp = number;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
