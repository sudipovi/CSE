// Shudip Golder Ovei,2401040;
// Problem 5 alter
#include <stdio.h>
int main()
{
    char inp;
    printf("Enter your character:\n");
    scanf(" %c", &inp);

    switch (inp)
    {

    case 'A' ... 'Z':
        inp = inp + 32;
        printf("%c\n", inp);
        break;

    case 'a' ... 'z':
        inp = inp - 32;
        printf("%c\n", inp);
        break;

    default:
        printf("Invalid input\n");
    }

    return 0;
}
