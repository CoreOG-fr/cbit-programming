/*
    program to check if a given integer is a palindrome or not
    u enter a number and it tells u
    palindrome means the number reads same from both sides like 121 or 1331
    so we reverse the number and compare it with the original
*/

#include <stdio.h>

int main() {
    int number, temp, digit, reverse = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (reverse == number) {
        printf("%d is a Palindrome number\n", number);
    } else {
        printf("%d is not a Palindrome number\n", number);
        printf("Reverse of %d is %d\n", number, reverse);
    }

    return 0;
}
