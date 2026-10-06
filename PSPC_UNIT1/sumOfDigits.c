#include <stdio.h>

int main() {
    int n, t, d, s = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    t = n;

    if (t < 0) {
        t = -t;


    }

    while (t != 0) {
        d = t % 10;
        s = s + d;
        t = t / 10;


    }

    printf("Sum of digits of %d = %d\n", n, s);

    return 0;


}
