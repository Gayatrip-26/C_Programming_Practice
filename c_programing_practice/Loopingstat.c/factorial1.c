// find foactorial series and factorial of user entered number by using while loop.
#include <stdio.h>
 int main()
   {
     int n,i=1,f=1;
       printf("Enter any number of n : \n");
       scanf("%d",&n);

    while(i<=n)
        {
            f=f*i;
            i++;
            printf("%d\n",f);
        }

    printf("The factorial of %d is %d",n,f);

   }