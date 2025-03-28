// Shudip Golder Ovei, Roll: 2401040
// Problem 8
#include <stdio.h>
int main()
{
  int sal, pt;
  printf("Enter your salary: ");
  scanf("%d", &sal);
  int p1 = 5000, p2 = 10000, p3 = 15000;

  // in the question, there was a missing part from 40001 to 40999; I added that part in my code

  if (sal > 0 && sal <= 40000)
  {
    pt = p1;
    printf("Provident Fund Ammount Is: %d\n", pt);
  }
  else if (sal >= 40001 && sal <= 99999)
  {
    pt = p1 + p2;
    printf("Provident Fund Ammount Is: %d\n", pt);
  }
  else if (sal > 100000)
  {
    pt = p1 + p2 + p3;
    printf("Provident Fund Ammount Is: %d\n", pt);
  }
  else
  {
    printf("Invalid Ammount\n");
  }

  return 0;
}