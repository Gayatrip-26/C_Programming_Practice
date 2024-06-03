#include <stdio.h>
 int main ()
    {
        int i=1, n, M;
           printf("Enter any num : \n");
           scanf("%d",&n);
           printf("The multiplication table of %d is \n", 5);
           
        while (i<=10)
             {
                 M = n*i;
                 printf("%d \n", M );
                 i++;
             }
    }