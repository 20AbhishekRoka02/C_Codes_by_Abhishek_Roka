#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    printf("Enter 3rd number: ");
    scanf("%d",&num3);

    if (num1 <= num2)
    {
        num1 = num2;
    }

    if (num1 <= num3)
    {
        num1 = num3;
    }

    printf("Maximum of given 3 numbers is: %d\n", num1);

    return 0;

}