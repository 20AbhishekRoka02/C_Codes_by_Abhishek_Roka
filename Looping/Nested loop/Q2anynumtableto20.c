// Input any number and print number to 20 tables.
#include <stdio.h>

int main()
{
    int num;
    printf("num = ");
    scanf("%d", &num);

    if (num >= 20)
    {
        for (int i = num; i > 19; i--)
        {
            printf("\nTable of %d ", i);
            for (int j = 1; j < 11; j++)
            {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }
    }
    else
    {
        for (int i = num; i < 21; i++)
        {
            printf("\nTable of %d ", i);
            for (int j = 1; j < 11; j++)
            {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }
    }

    return 0;
}