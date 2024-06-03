#include <stdio.h>
void main()
{
    int n, i = 2;
    printf("Enter any no :\n");
    scanf("%d", &n);

    while (n % i != 0)
    {
        i++;
    }
    if (i == n)
        printf("%d is a prime no", n);

    else
        printf("%d is not a prime no", n);

    return 0;
}