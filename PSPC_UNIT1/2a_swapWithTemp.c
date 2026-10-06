#include <stdio.h>

int main() {
    int a, b, t;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;


}
