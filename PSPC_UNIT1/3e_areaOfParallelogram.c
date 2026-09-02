/*
    program to find area of a parallelogram
    formula is base * height
    u enter base and height and it gives u the area
*/

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of the parallelogram: ");
    scanf("%f", &base);

    printf("Enter height of the parallelogram: ");
    scanf("%f", &height);

    area = base * height;

    printf("Area of Parallelogram = %.2f\n", area);

    return 0;
}
