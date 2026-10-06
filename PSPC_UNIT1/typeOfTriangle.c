#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("The triangle is Equilateral\n");


    }
    else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles\n");


    }
    else {
        printf("The triangle is Scalene\n");


    }

    return 0;


}
