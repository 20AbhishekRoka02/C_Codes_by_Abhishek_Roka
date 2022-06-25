#include <stdio.h>

int main()
{
    int num, num1, num2, num3;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    printf("Enter 3rd number: ");
    scanf("%d",&num3);

    num = num1 + num2 + num3;

    if (num%2 == 1)
    {
        printf("Sum of given numbers is odd.");
    }
    else
    {
        printf("Sum of given numbers is even.");
    }
    

    

    return 0;

}