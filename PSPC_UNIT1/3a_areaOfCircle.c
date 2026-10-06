#include <stdio.h>

int main() {
    float r, area;
    float pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    area = pi * r * r;
    printf("Area of Circle = %.2f\n", area);

    return 0;


}
