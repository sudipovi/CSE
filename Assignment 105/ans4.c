// Shudip Golder Ovei,2401040;
// Problem 4
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter value of a:\n");
    scanf("%d", &a);
    printf("Enter value of b:\n");
    scanf("%d", &b);
    printf("Enter value of c:\n");
    scanf("%d", &c);

    if (a == b && a == c && b == c)
    {
        printf("Equilateral Triangle.\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Isosceles Triangle.\n");
    }
    else
    {
        printf("Scalene Triangle.\n");
    }

    return 0;
}
