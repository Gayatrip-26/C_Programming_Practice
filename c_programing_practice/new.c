#include <stdio.h>
 int main(){
   //  int a=10;
   //  int *b=&a;
   //  printf("%d\n",a);
   //  printf("%u\n",&a);
   //  printf("%d\n",*b);
   int pages=100;
   int bools=10;
   printf("%d", bools);
   printf("%d", &bools);

   printf("%d", pages);
   printf("%d", &pages);
   printf("%d", *pages);
   printf("%d", **pages);

   return 0;
 }