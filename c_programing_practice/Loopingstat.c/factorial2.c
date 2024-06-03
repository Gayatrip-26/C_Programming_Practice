//factorial using for loop.
#include <stdio.h>
 int main()
   {
     int n,f=1,i;
       printf("Enter any number : \n");
       scanf("%d",&n);

    for(i=1; i<=5; i++)
      {
        f=f*i;

      }

    printf("%d is factorial of %d",f,n);
    
   }