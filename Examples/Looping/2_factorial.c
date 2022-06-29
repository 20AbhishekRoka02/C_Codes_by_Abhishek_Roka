#include <stdio.h>

int main()
{
    int n, fa = 1, i;
    printf("Enter any number :- ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fa *= i;
    }
    printf("\n\nThe factorial is %d", fa);

    return 0;
}