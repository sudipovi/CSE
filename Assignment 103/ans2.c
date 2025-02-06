// Shudip Golder Ovei; Roll: 2401040
// Prbolem 2

#include <stdio.h>
int main()
{
  int p1, p2, p3;

  printf("Input 1st value: ");
  scanf("%d", &p1);

  printf("Input 2nd value: ");
  scanf("%d", &p3);

  // with 3rd variable
  p2 = p1; // p1 gives to p2
  p1 = p3; // p3 gives to p1
  p3 = p2; // p2 gives to p3

  printf("Swap using 3rd variable is: %d, %d\n", p1, p3);

  // without 3rd variable
  printf("Swap without using 3rd variable is: %d, %d", ((p1 + p2) - p2), ((p1 + p2) - p1));

  return 0;
}