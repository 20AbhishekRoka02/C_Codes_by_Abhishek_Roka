#include <stdio.h>

int main()
{
    int m, n, ma;
    printf("Enter first number: ");
    scanf("%d", &m);
    printf("Enter second number: ");
    scanf("%d", &n);
    if (m > n)
    {
        ma = m;
    }
    else
    {
        ma = n;
    }
    printf("\n The maximum number is %d", ma);
    return 0;
}