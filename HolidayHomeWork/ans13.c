// Shudip Golder Ovei, Roll: 2401040
// Problem 13
#include <stdio.h>
int main()
{
  int i;
  printf("Enter your number: ");
  scanf("%d", &i);

  switch (i)
  {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
  default:
    printf("This is not a day.\n");
  }

  return 0;
}