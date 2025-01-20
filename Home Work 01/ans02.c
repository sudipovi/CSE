// Shudip Golder Ovei, Roll: 2401040
//  Problem 2:

#include <stdio.h>
int main()
{
  int total_sec = 583421, hrs, min, sec;
  hrs = total_sec / 3600; // 3600 sec = 1hr
  total_sec %= 3600;
  min = total_sec / 60; // 60 sec = 1min
  sec = total_sec % 60;
  printf("583421 seconds is %d hours, %d minutes and %d seconds", hrs, min, sec);
  return 0;
}
