#include <stdio.h>

 int main() {
    double distance, time, speed;

    // Prompt the user to enter the distance in kilometers
    printf("Enter the distance traveled by the car (in kilometers): ");
    scanf("%lf", &distance);

    // Prompt the user to enter the time taken in hours
    printf("Enter the time taken for the journey (in hours): ");
    scanf("%lf", &time);

    // Calculate the speed using the formula: Speed = Distance / Time
    if (time != 0) {
        speed = distance / time;
        printf("The speed of the car is %.2lf kilometers per hour.\n", speed);
    } else {
       /**/ printf("Time cannot be zero. Please enter a valid time.\n");
    }

    return 0;
 }
