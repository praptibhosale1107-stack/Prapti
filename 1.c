#include <stdio.h>

int add(int p, int q)
{
  int d = p + q;
  return d;
}
void main()
{
  int x, y, z;
  printf("Enter 2 numbers:");
  scanf("%d %d", &x, &y);
  z = add(x, y);
  printf("Addtion is %d", z);
}