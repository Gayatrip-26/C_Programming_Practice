#include <stdio.h>
int main()
{
  int n, dig, sum = 0, temp;
  printf("Enter any num :\n");
  scanf("%d", &n);
  temp = n;

  while (temp != 0)
  {
    dig = temp % 10;
    sum = sum * 10 + dig;
    temp = temp / 10;
  }
  printf("%d is the polimdrome no", n);

  if (sum == n)
    printf("%d is the polimdrome no", n);

  else
    printf("%d is not the polimdrome no", n);
}