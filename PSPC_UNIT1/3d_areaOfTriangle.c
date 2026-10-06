#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of Triangle = %.2f\n", area);

    return 0;


}
