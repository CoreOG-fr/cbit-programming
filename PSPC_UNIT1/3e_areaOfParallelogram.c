#include <stdio.h>

int main() {
    float b, h, area;

    printf("Enter base of the parallelogram: ");
    scanf("%f", &b);
    printf("Enter height of the parallelogram: ");
    scanf("%f", &h);

    area = b * h;
    printf("Area of Parallelogram = %.2f\n", area);

    return 0;


}
