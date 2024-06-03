#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Input the coordinates of the two points
    printf("Enter the coordinates of point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance between the two points
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distance between the two points: %.2lf\n", distance);

    return 0;
}
