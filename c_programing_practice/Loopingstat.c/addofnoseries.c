#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input the value of 'n'
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }

    // Display the result
    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}
