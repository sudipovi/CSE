// Shudip Golder Ovei, Roll:2401040
// Problem 2

#include <stdio.h>
int main()
{
  int fst, lst;

  printf("Input two numbers: \n");
  scanf("%d%d", &fst, &lst);

  if (fst - lst > lst - fst)
  {
    printf("The largest portion is: %d\n", fst);
  }
  else if (lst - fst > fst - lst)
  {
    printf("The largest portion is: %d\n", lst);
  }
  else
  {
    printf("The portions are equal.\n");
  }

  return 0;
}