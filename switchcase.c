#include<stdio.h>

int main ()
 {
    int ch,x,y,z;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplaction");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    
    switch(ch)
    {
     case 1:
     {
        printf("Enter any 2 numbers");
        scanf("%d %d", &x ,&y);
        z=x+y;
        printf("addition is %d",z);
        break;
     }
     case 2:
     {
        printf("Enter any 2 numbers");
        scanf("%d %d", &x ,&y);
        z=x-y;
        printf("subtraction is %d",z);
        break;
     }
     case 3:
     {
        printf("Enter any 2 numbers");
        scanf("%d %d", &x ,&y);
        z=x*y;
        printf("multiplacation is %d",z);
        break;
     }
    }
    return 0;
 }