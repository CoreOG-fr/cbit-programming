#include <stdio.h>

int main() {
    int n, i, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number\n");
        return 0;


    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            s = s + i;


        }


    }

    if (s == n) {
        printf("%d is a Perfect number\n", n);
        printf("Its divisors are: ");
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                printf("%d ", i);


            }


        }
        printf("\n");


    }
    else {
        printf("%d is not a Perfect number\n", n);
        printf("Sum of its divisors = %d\n", s);


    }

    return 0;


}
