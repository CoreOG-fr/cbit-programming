#include <stdio.h>

int main() {
    int n, t, d, rev = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    t = n;

    while (t != 0) {
        d = t % 10;
        rev = rev * 10 + d;
        t = t / 10;


    }

    if (rev == n) {
        printf("%d is a Palindrome number\n", n);


    }
    else {
        printf("%d is not a Palindrome number\n", n);
        printf("Reverse of %d is %d\n", n, rev);


    }

    return 0;


}
