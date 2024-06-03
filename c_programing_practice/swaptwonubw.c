//Without using third variable
#include <stdio.h>
 void main()
    {
        int a, b;
          printf("Enter any two numbers : \n");
          scanf("%d, %d", &a, &b);

          a = a + b;
          b = a - b;
          a = a - b;

        printf("After swapping a=%d,b=%d",a,b);

        return 0;

    }