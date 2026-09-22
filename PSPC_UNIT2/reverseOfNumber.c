/*
    program to print the reverse of a number
    u enter something like 1234 and it prints 4321
    we keep pulling out the last digit with % 10
    and removing it with / 10
*/

#include <stdio.h>

int main() {
    int number, temp, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (number < 0) {
        reverse = -reverse;
    }

    printf("Reverse of %d = %d\n", number, reverse);

    return 0;
}
