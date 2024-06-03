#include <stdio.h>
 void main ()
    {
        char ch;
        printf("Enter any character :\n");
        scanf("%c",&ch);

        if(ch>='A' && ch<='Z')
           printf("%c is a upper case letter",ch);

        else if(ch>='a' && ch<='z')
           printf("%c is a lower case latter",ch);

        else if (ch>='0' && ch<='9')
           printf("%c is a digit",ch);

        else
           printf("%c is a special character",ch);

    }
