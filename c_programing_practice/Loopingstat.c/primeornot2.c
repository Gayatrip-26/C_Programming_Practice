#include <stdio.h>
 void main()
    {
        int n, flag=0;
        printf("Entar any number :\n");
        scanf("%d",&n);

        for( int i=2;i<=n/2;i++)
           {
            if(n%i==0)
              {
                flag=1;
                break;

              }
           }
        if (flag==1)
           printf("%d is not a prime no",n);

        else
           printf("%d is a prime no",n);
        
    }