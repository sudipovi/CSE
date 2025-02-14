// Shudip Golder Ovei, Roll:2401040
// Problem 1 alt,

#include <stdio.h>
int main()
{
  int i;
  printf("Input a number: ");
  scanf("%d", &i);

  if (i == 54)
  {
    i = "Barishal.";
  }
  else if (i == 12)
  {
    i = "Chittagong.";
  }
  else if (i == 100)
  {
    i = "Dhaka.";
  }
  else if (i == 71)
  {
    i = "Mymansingh.";
  }
  else if (i == 36)
  {
    i = "Khulna.";
  }
  else if (i == 12)
  {
    i = "Rajshahi.";
  }
  else if (i == 12)
  {
    i = "Rangpur.";
  }
  else if (i == 12)
  {
    i = "Sylhet.";
  }
  else
  {
    printf("NOT FOUND!");
  }

  printf("He wants to go to %s", i);

  return 0;
}
