#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    max = a;

    if (b > max) {
        max = b;


    }

    if (c > max) {
        max = c;


    }

    printf("Greatest of the 3 numbers = %d\n", max);

    if (a == b && b == c) {
        printf("All 3 numbers are equal\n");


    }

    return 0;


}
