// Shudip Golder Ovei, Roll: 2401040
// Problem 9
#include <stdio.h>
int main()
{
  double x, y, z;
  printf("Enter value of X: ");
  scanf("%lf", &x);

  printf("Enter value of Y: ");
  scanf("%lf", &y);

  printf("Enter value of Z: ");
  scanf("%lf", &z);

  if ((x + y > z) && (x + z > y) && (y + z > x))
  {
    printf("Possible Triangle\n");
  }
  else
  {
    printf("Impossible Triangle\n");
  }

  return 0;
}
