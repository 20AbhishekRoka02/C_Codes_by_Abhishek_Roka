// To check whether an inputted number is prime or not.

#include <stdio.h>

void checkprime(int n);

int main()
{

    int num;
    printf("num = ");
    scanf("%d", &num);
    checkprime(num);

    return 0;
}

void checkprime(int n)
{

    int counter = 0;

    if (n == 1)
    {
        printf("\n%d is not a prime number.\n", n);
    }
    else if (n == 2)
    {
        printf("\n%d is a prime number.\n", n);
    }
    else if (n > 2)
    {

        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                counter = 1;
                printf("\n%d is not a prime number.\n", n);
                break;
            }
        }
        if (counter == 0)
        {
            printf("\n%d is a prime number.\n", n);
            
        }
    }
    else
    {
        printf("\nEnter a positive integer.\n");
    }
    
}