// Shudip Golder Ovei,2401040;
// Problem 3
#include <stdio.h>
int main()
{
    int n;

    printf("Enter your number:\n");
    scanf("%d",&n);

    if (n<0){
        printf("The number is a negative number.\n");
    }
    else if (n>0){
        printf("The number is a positive number.\n");
    }
    else {
        printf("The number is zero.\n");
    }

  return 0;
}
