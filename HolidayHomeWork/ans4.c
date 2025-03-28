// Shudip Golder Ovei, Roll: 2401040
// Problem 4
#include <stdio.h>
int main()
{
  double u, l, wout_vat, vat_amt, t_bill, e_rate;
  printf("Total Unit: ");
  scanf("%lf", &u);
  printf("Load: ");
  scanf("%lf", &l);

  if (u >= 0 && u <= 75)
  {
    e_rate = 5.26;
  }

  if (u >= 76 && u <= 200)
  {
    e_rate = 7.2;
  }

  if (u >= 201 && u <= 300)
  {
    e_rate = 7.59;
  }

  if (u >= 301 && u <= 400)
  {
    e_rate = 8.02;
  }

  if (u >= 401 && u <= 600)
  {
    e_rate = 12.67;
  }

  if (u >= 601)
  {
    e_rate = 14.61;
  }

  wout_vat = (u * e_rate) + (42 * l);
  vat_amt = (wout_vat * 5) / 100;
  t_bill = wout_vat + vat_amt;
  printf("Total bill: %.2lf\n", t_bill);

  return 0;
}