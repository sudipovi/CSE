// Shudip Golder Ovei, Roll: 2401040
// Problem 10
#include <stdio.h>
int main()
{
  int m, n;
  printf("Enter your value : ");
  scanf("%d", &m);

  if (m > 0)
  {
    n = 1;
    printf("n = %d\n", n);
  }
  else if (m < 0)
  {
    n = -1;
    printf("n = %d\n", n);
  }
  else
  {
    n = 0;
    printf("n = %d\n", n);
  }

  return 0;
}