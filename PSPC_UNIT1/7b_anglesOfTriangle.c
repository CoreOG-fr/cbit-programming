/*
    program to find the angles of a triangle given its 3 sides
    using the law of cosines
    u give sides a, b, c and it gives all 3 angles in degrees
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float angleA, angleB, angleC;
    float pi = 3.14159;

    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    angleA = acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / pi);
    angleB = acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / pi);
    angleC = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / pi);

    printf("Angle A = %.2f degrees\n", angleA);
    printf("Angle B = %.2f degrees\n", angleB);
    printf("Angle C = %.2f degrees\n", angleC);

    return 0;
}
