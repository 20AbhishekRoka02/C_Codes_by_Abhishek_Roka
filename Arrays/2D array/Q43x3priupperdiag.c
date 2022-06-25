// input numbers in 3 x 3 elements array and print the upper portion from the diagonal

# include<stdio.h>

int main()
{
    int array1[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j>=i)
            {
                printf("%d\n",array1[i][j]);
            }
        }
    }



    return 0;
}