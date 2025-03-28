// Shudip Golder Ovei, Roll: 2401040
// Problem 7
#include <stdio.h>
int main()
{
  int c_hand, save, c_frnd, loan, u_bill, j_amnt, total_j;
  printf("Cash in hand: ");
  scanf("%d", &c_hand);
  printf("Savings: ");
  scanf("%d", &save);
  printf("Cash lent to friend: ");
  scanf("%d", &c_frnd);
  printf("Loan: ");
  scanf("%d", &loan);
  printf("Utility bills: ");
  scanf("%d", &u_bill);

  j_amnt = (c_hand + c_frnd + save) - (loan + u_bill);
  total_j = (j_amnt * 25) / 1000;
  printf("Total Jakat: %d Taka\n", total_j);

  return 0;
}