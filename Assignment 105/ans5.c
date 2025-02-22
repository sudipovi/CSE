// Shudip Golder Ovei,2401040;
// Problem 5
// This program convert a single char into upercase or lowercase
#include <stdio.h>
int main()
{
    char inp;
    printf("Enter your character:\n");
    scanf(" %c", &inp);

    if (inp >= 'A' && inp <= 'Z')
    {
        inp = inp + 32;
        printf("%c", inp);
    }
    else if (inp >= 'a' && inp <= 'z')
    {
        inp = inp - 32;
        printf("%c", inp);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
