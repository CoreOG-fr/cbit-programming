/*
    program to find the area of a square
    formula is side * side
    u enter the side length and it gives the area
*/

#include <stdio.h>

int main() {
    float side, area;

    printf("Enter side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of Square = %.2f\n", area);

    return 0;
}
