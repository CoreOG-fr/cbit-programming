/*
    program to check what type of triangle it is from its sides
    u enter the 3 sides and it tells if it is scalene, isosceles or equilateral
    all sides same = equilateral
    two sides same = isosceles
    no sides same = scalene
*/

#include <stdio.h>

int main() {
    int sideA, sideB, sideC;

    printf("Enter side a: ");
    scanf("%d", &sideA);

    printf("Enter side b: ");
    scanf("%d", &sideB);

    printf("Enter side c: ");
    scanf("%d", &sideC);

    if (sideA == sideB && sideB == sideC) {
        printf("The triangle is Equilateral\n");
    } else if (sideA == sideB || sideB == sideC || sideA == sideC) {
        printf("The triangle is Isosceles\n");
    } else {
        printf("The triangle is Scalene\n");
    }

    return 0;
}
