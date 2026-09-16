/*
    program to check if a given number is an armstrong number or not
    u enter a number and it tells u
    armstrong number means sum of cubes of its digits is equal to the number itself
    example 153 = 1*1*1 + 5*5*5 + 3*3*3
*/

#include <stdio.h>

int main() {
    int number, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == number) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
        printf("Sum of cubes of digits = %d\n", sum);
    }

    return 0;
}
