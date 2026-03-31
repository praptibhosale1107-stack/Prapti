#include <stdio.h>
/// @brief 
/// @return 
int main()
{
    int x,y,z;
    printf("enter 3 numbers");
    scanf("%d %d %d", &x,&y,&z);
    if(x>y && y>z)
    {
        printf("%d is greater ",x);
    }
    else if(y>x && y>z);
    {
        printf("%d is greater",y);
    }
    else
    {
        printf("%d is greater",z);
    }
}
