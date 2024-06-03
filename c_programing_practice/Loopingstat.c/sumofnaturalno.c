#include <stdio.h>
 void main()
    {
        int n, sum;
        printf("Enter any number: \n");
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
            sum=sum+i;
            printf("%d is the ssum of %d",sum,n);

        }
    }