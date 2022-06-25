// Input any character and print that whether it is a vowel or not.

#include <stdio.h>

int main()
{

    char alpha;

    printf("Enter a character: ");
    scanf("%c", &alpha);
    

    if ((alpha > 96 && alpha < 123) || (alpha > 64 && alpha < 91))
    {

        switch (alpha)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

            printf("It is a vowel.\n");
            break;

        default:
            printf("It is not a vowel.\n");
            break;
        }
    }

    else
    {
        printf("It is not an alphabet.\n");
    }
    

    return 0;
}