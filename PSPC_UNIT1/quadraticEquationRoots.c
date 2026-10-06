#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, rp, ip;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Value of a cannot be zero, this is not a quadratic equation\n");
        return 0;


    }

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);


    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);


    }
    else {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Roots are imaginary\n");
        printf("Root 1 = %.2f + %.2fi\n", rp, ip);
        printf("Root 2 = %.2f - %.2fi\n", rp, ip);


    }

    return 0;


}
