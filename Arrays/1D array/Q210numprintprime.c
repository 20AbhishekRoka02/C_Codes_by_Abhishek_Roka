// Input any 10 numbers in an array and print only prime numbers.
#include <stdio.h>

int main()
{
    int array[10], num = 0, counter, k=0;
    for (int i = 0; i < 10; i++)
    {
        printf("num%d = ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        counter = 0;
        num = array[i];
        if (num > 2)
        {

            for (int j = 2; j < num; j++)
            {
                if (num % j == 0)
                {
                    counter = 1;
                    break;
                }
            }
            if (counter == 0)
            {
                printf("%d is a prime number.\n", num);
                k=1;
            }
        }
        else if (num == 2)
        {
            printf("2 is a prime number.\n");
        }
        
        
        
    }
    if (k==0)
    {
        printf("Array has no Prime number.\n");
    }

    return 0;
}