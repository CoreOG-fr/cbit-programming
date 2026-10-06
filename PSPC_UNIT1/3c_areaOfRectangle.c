#include <stdio.h>

int main() {
    float l, b, area;

    printf("Enter length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &b);

    area = l * b;
    printf("Area of Rectangle = %.2f\n", area);

    return 0;


}
