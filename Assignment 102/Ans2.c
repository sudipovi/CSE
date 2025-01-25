// Shudip Golder Ovei; Roll:2401040;
// Problem 2;

#include <stdio.h>
int main()
{
  int t_time, hrs, mins, sec;

  printf("Input the time: ");
  scanf("%d", &t_time);

  hrs = t_time / 3600;
  mins = (t_time % 3600) / 60;
  sec = t_time - (hrs * 3600) - (mins * 60);

  printf("%d Hours : %d Minutes : %d Seconds", hrs, mins, sec);
}