#include <stdio.h>
#include <math.h>
 float main ()
     {
         float f1,f2,f3,res;
              printf("Enter any three forces: \n");
              scanf("%f,%f,%f",&f1,&f2,&f3);
             
         res = sqrt((f1 * f1) + (f2 * f2) + (f3 * f3));
               printf("%f", res);
               
            return 0;
     }