/*
    program to check if a given number is a palindrome or not
    u enter a number and it tells u
    palindrome means it reads the same from both sides like 121 or 1331
    so we reverse it and compare with the original number
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

    if (reverse == number) {
        printf("%d is a Palindrome number\n", number);
    } else {
        printf("%d is not a Palindrome number\n", number);
        printf("Its reverse is %d\n", reverse);
    }

    return 0;
}
