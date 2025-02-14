// Shudip Golder Ovei, Roll:2401040
// Problem 1

#include <stdio.h>
int main()
{
  int i;

  printf("Input a number: ");
  scanf("%d", &i);

  if (i == 54)
  {
    printf("He wants to go to Barishal.\n");
  }
  else if (i == 12)
  {
    printf("He wants to go to Chittagong.\n");
  }
  else if (i == 100)
  {
    printf("He wants to go to Dhaka.\n");
  }
  else if (i == 71)
  {
    printf("He wants to go to Mymensingh.\n");
  }
  else if (i == 36)
  {
    printf("He wants to go to Khulna.\n");
  }
  else if (i == 97)
  {
    printf("He wants to go to Rajsahi.\n");
  }
  else if (i == 6)
  {
    printf("He wants to go to Rangpur.\n");
  }
  else if (i == 85)
  {
    printf("He wants to go to Sylhet.\n");
  }
  else
  {
    printf("Not Found!\n");
  }
  return 0;
}