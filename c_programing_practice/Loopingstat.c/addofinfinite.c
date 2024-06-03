#include <stdio.h>

int main() {
    int n, i;
    double num, sum = 0.0;

    // Input the number of values to add
    printf("Enter the number of values to add: ");
    scanf("%d", &n);

    // Input and calculate the sum
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;
    }

    // Display the result
    printf("The sum of %d numbers is: %.2lf\n", n, sum);

    return 0;
}

