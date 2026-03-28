#include<stdio.h>
int main()
{
 int a[10],i,s= 0 ;
 float per;
 printf("Enter marks of 5 subjects:");
 for(i=0;i<=5;i++)
   {
     scanf("%d", &a[i]);
  }
 for(i=0;i<=5;i++)
   {
     s=s+a[i];
   }
     printf("sum is %d\n", s);
     per=(s/500.0)*100.0;
     printf("percentage is %f\n", per);
 if(per>70)
   {
     printf(" congragulations you got distinction\n");
   }
 else if(per>=60 && per<70)
   {
     printf("congragulation you got first class\n");
   }
 else if(per>=50 && per<55)
   {
     printf("congragulation you got second class\n");
   }
 else if(per>=40 && per<45)
   {
     printf("you are pass\n");
   }
 else(per>35)
   {
     printf("sorry you are fail\n");
   } 
 return 0;
}