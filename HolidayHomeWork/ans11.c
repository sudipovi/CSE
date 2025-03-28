// Shudip Golder Ovei, Roll: 2401040
// Problem 11
#include <stdio.h>
int main()
{
  char i;
  printf("Enter your input: ");
  scanf("%c", &i);

  switch (i)
  {
  case 'A' ... 'Z':
    printf("Alphabet\n");
    printf("Capital Letter\n");
    break;

  case 'a' ... 'z':
    printf("Alphabet\n");
    printf("Small Letter\n");
    break;

  case '0' ... '9':
    printf("Digit\n");
    break;

  default:
    printf("Special Symbol\n");
  }

  return 0;
}
