#include <stdio.h>

int main() {
    int n, t, d, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    if (t < 0) {
        t = -t;


    }

    while (t != 0) {
        d = t % 10;
        rev = rev * 10 + d;
        t = t / 10;


    }

    if (n < 0) {
        rev = -rev;


    }

    printf("Reverse of %d = %d\n", n, rev);

    return 0;


}
