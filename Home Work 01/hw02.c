// Shudip Golder Ovei, Roll: 2401040
//  Problem 2:

#include <stdio.h>

int main()
{

  int t_time = 583421, hrs, min, sec;
  hrs = t_time / 3600;
  min = (t_time % 3600) / 60;
  sec = t_time - (hrs * 3600) - (min * 60);

  printf("%d %d %d", hrs, min, sec);

  return 0;
}