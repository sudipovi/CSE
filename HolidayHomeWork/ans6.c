// Shudip Golder Ovei, Roll: 2401040
// Problem 6
#include <stdio.h>
int main()
{
  int fst, lst, lsr;
  printf("First number: ");
  scanf("%d", &fst);

  printf("Last number: ");
  scanf("%d", &lst);

  lsr = (fst + lst) / 2;
  printf("The loser will be number: %d\n", lsr);

  return 0;
}