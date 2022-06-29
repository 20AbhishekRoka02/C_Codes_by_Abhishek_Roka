#include <stdio.h>

int main()
{

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n >= 0)
    {

        printf("\n The number is positive");
    }
    if (n < 0)
    {

        printf("\n The number is negative");
    }

return 0;
}