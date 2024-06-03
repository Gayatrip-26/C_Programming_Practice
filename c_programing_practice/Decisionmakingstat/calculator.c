#include <stdio.h>
 int main()
    {
        char operator;
        double num1, num2, result;

        printf("Enter any operator (+,-,*,/,%) \n");
        scanf("%c",&operator);

        printf("Enter any two values for calculation \n");
        scanf("%lf %lf",&num1,&num2);

        switch (operator){
            case '+':
                printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2 );
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2 );
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2 );
                break;
            case '/':
                if (num2 == 0) 
                  printf("Error! Divisible by 2 is not possible");
             
                else
                   printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2 );
                   break;
                   
        }
        
        return 0;
              
}
 
  
        