// To find the fibonacci series by looping method of user entered number
#include <stdio.h>
 int main()
   {
     int n,a=0,b=1,c;
       printf("Enter any numb :\n");
       scanf("%d,&n");

       printf("The fibonacci series is : \n");
       scanf("%d\t,%d\t",a,b);

       for(int i=1; i<=n; i++)
         {
            c = a + b;
            a = b;
            b = c;

            printf("%d is the fibonacii series fo %d",c,n);
            
         }


   }