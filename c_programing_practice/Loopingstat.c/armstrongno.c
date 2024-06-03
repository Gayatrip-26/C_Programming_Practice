#include <stdio.h>
 void main()
    {
        int n,dig,sum=0,temp;
        printf("Enter any no: \n");
        scanf("%d",&n);
        temp=n;

        while(temp!=0)
            {
                dig= temp%10;
                sum=sum+(dig*dig*dig);
                temp=temp/10;

            }
        printf("%d is the armstrong no",n);

        if(sum==n)
          printf("%d is the armstrong no",n);

        else 
          printf("%d is the armstrong no",n);
        
    } 