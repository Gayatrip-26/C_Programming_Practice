#include <stdio.h>
 int main ()
     {
         int score;
            printf("Enter score of a student : \n");
            scanf("%d",&score);
            
        if (score >= 90)
           printf("Grade is : O ");
        
        else if (score >= 80 && score < 90)
               printf("Grade is : E ");
               
        else if (score >= 70 && score < 80)
               printf("Grade is :  A ");
               
        else if (score >= 60 && score < 70)
            printf("Grade is : B ");

        else if (score >= 50 && score < 60)
            printf("Grade is : C ");

        else if (score >= 40 && score < 50)
            printf("Grade is : D ");

        else (score < 40)
            printf("The student is fail in the exam ");
            
        return 0;
        
     }