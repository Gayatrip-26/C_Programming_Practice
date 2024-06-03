//By using third variable
#include <stdio.h>
 void main()
    {
        int a, b, t;
          printf("Enter any two numbers : \n");
          scanf("%d,%d",&a,&b);

        t = a;
        a = b;
        b = a;

        printf("a=%d, b=%d", a, b);
         
        return 0;
        
    }