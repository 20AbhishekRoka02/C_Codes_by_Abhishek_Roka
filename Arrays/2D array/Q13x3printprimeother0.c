// input numbers in 3 x 3 elements array and print only prime numbers otherwise 0.

#include <stdio.h>

int main()
{
    int array[3][3], num, counter;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("[");
        }

        for (int j = 0; j < 3; j++)
        {
            counter = 0;
            num = array[i][j];

            if (num == 1)
            {
                array[i][j] = 0;
            }

            if (num == 2)
            {
                continue;
            }

            if (num > 2)
            {
                for (int k = 2; k < num; k++)
                {
                    if (num % k == 0)
                    {
                        counter = 1;
                        array[i][j] = 0;
                        break;
                    }
                }
            }

            // Display section
            if (j == 0)
            {
                printf("[ %d ", array[i][j]);
            }
            else if (j == 2)
            {
                if (i == 2)
                {
                    printf(" %d ]]\n");
                }
                else
                {
                    printf(" %d ]\n", array[i][j]);
                }
            }
            else
            {
                printf("%d", array[i][j]);
            }
        }
    }

    return 0;
}