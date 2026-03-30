#include <stdio.h>
void  main()
{
    int x,a,b,c,d,w;
    printf("Enter a number:");
    scanf("%d",x);

    c=x%10;
    w=x/10;
    b=w%10;
    a=w/10;
    d=(a*a*a+b*b*b+c*c*c);
    if(d==x)
    {
        printf("%d is a armstrong:");
    }
    else
    {
        printf("%d is not armstrong:");
    }
   return 0;
}
