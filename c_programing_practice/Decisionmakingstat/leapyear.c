#include <stdio.h>
 int main ()
     {
         int year;
            printf("Enter any year : \n");
            scanf("%d",&year);
            
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
           printf("The entered year is a leap year %d",year);
           
        else 
            printf("The entered year is not a leap year %d",year);
            
            return 0;
     }