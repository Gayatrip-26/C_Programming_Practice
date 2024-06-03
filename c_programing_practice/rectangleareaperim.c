#include <stdio.h>
int main()
{
   float length, breadth, Area, Perimeter;
   printf("Enter the length of rectangle:\n");
   scanf("%f", &length);
   printf("Enter the breadth of rectangle:\n");
   scanf("%f", &breadth);
   Area = length * breadth;
   Perimeter = 2 * (length + breadth);

   printf("%f\n", Area);
   printf("%f\n", Perimeter);

   return 0;
}
