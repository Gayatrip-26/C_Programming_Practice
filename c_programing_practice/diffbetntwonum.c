#include <stdio.h>
 int main ()
     {
         int num1,num2, diff;
            printf("Enter num1 : \n");
            scanf("%d",&num1);
            
            printf("Enter num2 : \n");
            scanf("%d",&num2);
            
            diff=num1-num2;
            
            printf("%d is the difference between both the nums",diff);
            
            return 0;
     }