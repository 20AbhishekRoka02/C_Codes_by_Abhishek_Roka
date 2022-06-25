//  print the multiplication of two 3 x 3 elements matrix.
/*
a+b+c a+b+c a+b+c
a+b+c a+b+c a+b+c
a+b+c a+b+c a+b+c
*/

#include <stdio.h>

int main()
{

    int array1[3][3], array2[3][3], result[3][3];
    int a, b, c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    printf("\n");

    // MATRIX MULTIPLICATION

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {

                result[i][j] += array1[i][k] * array2[k][j];
                // if (k==0)
                // {
                //     a = array1[i][k] * array2[k][j];
                // }
                // else if (k==1)
                // {
                //     /* code */
                // }
                // else
                // {
                //     /* code */
                // }
                

            }
        }
    }

    // result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for array2[%d][%d]: %d\n", i, j, result[i][j]);            
        }
    }

    return 0;
}
