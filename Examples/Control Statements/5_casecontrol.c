#include <stdio.h>

int main()
{
    char optr;
    int a, b;
    printf("Enter any one operator (+ - * /): ");
    scanf("%c", &optr);
    printf("Enter any two values :- ");
    scanf("%d %d", &a, &b);
    switch (optr)
    {
    case '+':
        printf("\nThe result is %d", a + b);
        break;

    case '-':
        printf("\n The result is %d", a - b);
        break;
    case '*':
        printf("\n The result is %d", a * b);
        break;
    case '/':
        printf("\n The result is %f ", a / b);
        break;

    default:
        printf("\n\nWrong Choice!!!");
    }

    return 0;
}