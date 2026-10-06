#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Initial a = %d\n", a);

    a += b;
    printf("After a += b : a = %d\n", a);

    a -= b;
    printf("After a -= b : a = %d\n", a);

    a *= b;
    printf("After a *= b : a = %d\n", a);

    a /= b;
    printf("After a /= b : a = %d\n", a);

    a %= b;
    printf("After a %%= b : a = %d\n", a);

    return 0;


}
