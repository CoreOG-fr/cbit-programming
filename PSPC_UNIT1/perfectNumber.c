/*
    program to check if a given number is a perfect number or not
    u enter a number and it tells u
    perfect number means the sum of its divisors (except itself) is equal to the number
    example 6 = 1 + 2 + 3
    example 28 = 1 + 2 + 4 + 7 + 14
*/

#include <stdio.h>

int main() {
    int number, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 1) {
        printf("Please enter a positive number\n");
        return 0;
    }

    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number) {
        printf("%d is a Perfect number\n", number);
        printf("Its divisors are: ");
        for (i = 1; i <= number / 2; i++) {
            if (number % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("%d is not a Perfect number\n", number);
        printf("Sum of its divisors = %d\n", sum);
    }

    return 0;
}
