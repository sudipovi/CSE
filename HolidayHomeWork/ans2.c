// Shudip Golder Ovei, Roll: 2401040
// Problem 2

#include <stdio.h>
int main()
{
  int in;
  printf("Choose your road: ");
  scanf("%d", &in);

  if (in % 5 == 0 || in % 3 == 0)
  {
    printf("You may go little girl.\n");
  }
  else
  {
    printf("Wrong Road.\n");
  }

  return 0;
}