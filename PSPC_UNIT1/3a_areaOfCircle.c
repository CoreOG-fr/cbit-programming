/*
    program to find the area of a circle
    formula is pi * r * r
    u enter the radius and it gives u the area
*/

#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
