#include <stdio.h>

int main()
{
    int n, i, counter = 0;
    printf("Enter any number :- ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            counter = 1;
            printf("\n The number is not prime");
            break;
        }
    }
    if (counter== 0)
    {
        printf("\n The number is prime.");
    }
        
    
        

    return 0;
}