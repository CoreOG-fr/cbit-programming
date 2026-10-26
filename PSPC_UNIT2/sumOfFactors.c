#include <stdio.h>

int main() {
    int n, i;
    long long s = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number\n");
        return 0;


    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            s = s + i;


        }


    }

    printf("Sum of factors of %d = %lld\n", n, s);

    return 0;


}
