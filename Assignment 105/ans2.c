// Shudip Golder Ovei,2401040;
// Problem 2
#include <stdio.h>
int main()
{
  int dg;
  printf("What is the temprature?\n");
  scanf("%d", &dg);

  switch (dg)
  {
  case -100000 ... 0:
    printf("The weather is freez.\n");
    break;
  case 1 ... 15:
    printf("The weather is cold.\n");
    break;
  case 16 ... 25:
    printf("The weather is normal.\n");
    break;
  case 26 ... 35:
    printf("The weather is hot.\n");
    break;
  case 36 ... 100:
    printf("The weather is extremely hot.\n");
    break;
  default:
    printf("The number is invalid\n");
  }

  return 0;
}
