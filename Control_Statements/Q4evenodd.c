#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num%2 == 1)
    {
        printf("Given number is odd.");
    }
    else
    {
        printf("Given number is even.");
    }
    

    

    return 0;

}