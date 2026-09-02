/*
    program to find distance between two points
    formula is sqrt((x2-x1)^2 + (y2-y1)^2)
    u enter both points and it gives the distance
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Enter X1: ");
    scanf("%f", &x1);

    printf("Enter Y1: ");
    scanf("%f", &y1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter Y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance between the two points = %.2f\n", distance);

    return 0;
}
