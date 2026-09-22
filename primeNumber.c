/*
    program to check if a given number is prime or not
    u enter a number and it tells u
    prime number is only divisible by 1 and itself
    so we try dividing from 2 up to half of the number
    if anything divides it then it is not prime
*/

#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    }

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("%d is a Prime number\n", number);
    } else {
        printf("%d is not a Prime number\n", number);
    }

    return 0;
}
