// Shudip Golder Ovei, Roll: 2401040
// Problem 3

#include <stdio.h>
#include <math.h>
int main()
{
  double w, h, bmi;
  printf("Enter weight(kg) = ");
  scanf("%lf", &w);
  printf("Enter height(m) = ");
  scanf("%lf", &h);
  bmi = w / pow(h, 2);

  if (bmi < 18.5)
  {
    printf("Underweight\n");
  }

  if (bmi >= 18.5 && bmi < 24.9)
  {
    printf("Normal weight\n");
  }

  if (bmi >= 25 && bmi < 29.9)
  {
    printf("Overrweight\n");
  }

  if (bmi >= 30)
  {
    printf("Obese\n");
  }

  return 0;
}