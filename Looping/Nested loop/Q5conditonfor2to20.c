// Input any number and check is it even or odd. If the number is even then print 2 to 20 tables else.  print 20 to 2 tables.

#include <stdio.h>

int main()
{
    int num;
    printf("number = ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        for (int i = 2; i < 21; i++)
        {
            printf("\nTable of %d\n", i);

            for (int j = 1; j < 11; j++)
            {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }
    }
    else
    {
        for (int i = 20; i > 1; i--)
        {
            printf("\nTable of %d\n", i);

            for (int j = 1; j < 11; j++)
            {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }
    }

    return 0;
}