// Shudip Golder Ovei, Roll: 2401040
// Problem 12
#include <stdio.h>
int main()
{
  int phy, chm, mth, pcm, pm;
  printf("The marks obtained in Physics: ");
  scanf("%d", &phy);
  printf("The marks obtained in Chemistry: ");
  scanf("%d", &chm);
  printf("The marks obtained in Mathematics: ");
  scanf("%d", &mth);
  pcm = phy + chm + mth;
  pm = phy + mth;
  printf("Marks of Maths, Physics and Chemistry : %d\n", pcm);
  printf("Marks of Maths and Physics : %d\n", pm);

  if (phy >= 55 && chm >= 50 && mth >= 65)
  {
    if (pcm >= 190)
    {
      printf("Eligible\n");
    }
    else if (pm >= 140)
    {
      printf("Eligible\n");
    }
    else
    {
      printf("Not Eligible\n");
    }
  }
  else
  {
    printf("Not Eligible\n");
  }

  return 0;
}
