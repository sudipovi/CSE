// Shudip Golder Ovei,2401040;
// Problem 1
#include <stdio.h>

int main()
{
  char nir, pro;

  printf("Enter R=Rock, P=Paper, S=Scissors\n");

  printf("Nirob: ");
  scanf(" %c", &nir);

  printf("Prova: ");
  scanf(" %c", &pro);

  switch (nir)
  {
  case 'R':
    if (pro == 'P')
    {
      printf("The winner is Prova.\n");
    }
    else if (pro == 'S')
    {
      printf("The winner is Nirob.\n");
    }
    else
    {
      printf("The match is draw.\n");
    }
    break;

  case 'P':
    if (pro == 'R')
    {
      printf("The winner is Nirob.\n");
    }
    else if (pro == 'S')
    {
      printf("The winner is Prova.\n");
    }
    else
    {
      printf("The match is draw.\n");
    }
    break;

  case 'S':
    if (pro == 'R')
    {
      printf("The winner is Prova.\n");
    }
    else if (pro == 'P')
    {
      printf("The winner is Nirob.\n");
    }
    else
    {
      printf("The match is draw.\n");
    }
    break;

  default:
    printf("Not a valid input.\n");
  }

  return 0;
}
