#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float A, B, C;
    float pi = 3.14159;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    A = acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / pi);
    B = acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / pi);
    C = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / pi);

    printf("Angle A = %.2f degrees\n", A);
    printf("Angle B = %.2f degrees\n", B);
    printf("Angle C = %.2f degrees\n", C);

    return 0;


}
