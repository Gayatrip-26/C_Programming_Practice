#include <stdio.h>
#include <math.h>

// Structure to represent a 3D vector
struct Vector3D {
    double x; // x-component
    double y; // y-component
    double z; // z-component
};

// Function to calculate the magnitude of a 3D vector
double magnitude3D(struct Vector3D v) {
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

// Function to calculate the resultant of forces in 3D
struct Vector3D calculateResultant3D(struct Vector3D forces[], int numForces) {
    struct Vector3D resultant = {0.0, 0.0, 0.0};

    for (int i = 0; i < numForces; i++) {
        resultant.x += forces[i].x;
        resultant.y += forces[i].y;
        resultant.z += forces[i].z;
    }

    return resultant;
}

int main() {
    int numForces;
    printf("Enter the number of forces: ");
    scanf("%d", &numForces);

    struct Vector3D forces[numForces];

    for (int i = 0; i < numForces; i++) {
        printf("Enter the x-component of force %d: ", i + 1);
        scanf("%lf", &forces[i].x);
        printf("Enter the y-component of force %d: ", i + 1);
        scanf("%lf", &forces[i].y);
        printf("Enter the z-component of force %d: ", i + 1);
        scanf("%lf", &forces[i].z);
    }

    struct Vector3D resultant = calculateResultant3D(forces, numForces);

    printf("Resultant Force in 3D:\n");
    printf("Magnitude: %.2lf\n", magnitude3D(resultant));
    printf("Direction (in degrees from the positive x-axis): %.2lf\n", atan2(resultant.y, resultant.x) * 180 / M_PI);
    printf("Elevation (in degrees from the xy-plane): %.2lf\n", atan2(resultant.z, magnitude3D(resultant)) * 180 / M_PI);

    return 0;
}
