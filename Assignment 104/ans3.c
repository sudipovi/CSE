// Shudip Golder Ovei, Roll:2401040
// Problem 3

#include <stdio.h>
int main()
{
  int input;
  double cel, far, c, f;

  printf("Enter \"1\" for Celsius to Fahrenheit.\nEnter \"2\" for Fahrenheit to Celsius.\n");
  scanf("%d", &input);

  if (input == 1)
  {
    printf("Enter your Celsius value: ");
    scanf("%lf", &c);

    far = (c * 9 / 5) + 32;

    printf("%.1lf Fahrenheit\n", far);
  }
  else if (input == 2)
  {
    printf("Enter your Fahrenheit value: ");
    scanf("%lf", &f);

    cel = (f - 32) * 5 / 9;

    printf("%.1lf Celsius\n", cel);
  }
  else
  {
    printf("The choice is not correct.\n");
  }
  return 0;
}
