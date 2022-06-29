#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number :-");
    scanf("%d", &n);

    if (n == 1)
        printf("\n\t The day is Sunday");
    else if (n == 2)
        printf("\n\t The day is Monday");
    else if (n == 3)
        printf("\n\t The day is Tuesday");
    else if (n == 4)
        printf("\n\t The day is Wednesday");
    else if (n == 5)
        printf("\n\t The day is Thursday");
    else if (n == 6)
        printf("\n\t The day is Friday");
    else if (n == 7)
        printf("\n\t The day is Saturday");
    else
        printf("\n\t Wrong Choice!!!");

    return 0;
}