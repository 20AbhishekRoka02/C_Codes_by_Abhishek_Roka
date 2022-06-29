#include <stdio.h>

int main()
{
    int a, b, c, m;
    printf("Enter any three numbers :-");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            m = a;
        else
            m = c;
    }
    else
    {
        if (c > b)
            m = c;
        else
            m = b;
    }
    printf("The largest number is %d", m);

    return 0;
}