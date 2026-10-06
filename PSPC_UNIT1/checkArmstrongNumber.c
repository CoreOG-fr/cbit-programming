#include <stdio.h>

int main() {
    int n, t, d, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    while (t != 0) {
        d = t % 10;
        s = s + (d * d * d);
        t = t / 10;


    }

    if (s == n) {
        printf("%d is an Armstrong number\n", n);


    }
    else {
        printf("%d is not an Armstrong number\n", n);
        printf("Sum of cubes of digits = %d\n", s);


    }

    return 0;


}
