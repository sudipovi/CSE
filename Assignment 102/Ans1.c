// Shudip Golder Ovei; Roll:2401040;
// Problem 1;

#include <stdio.h>
int main()
{
  int a, x, y;

  printf("How many students? ");
  scanf("%d", &a);

  printf("How much is a chips? ");
  scanf("%d", &x);

  printf("How much is a chocolate? ");
  scanf("%d", &y);

  printf("Required amount of taka is: %d taka", a * (x + y));
}