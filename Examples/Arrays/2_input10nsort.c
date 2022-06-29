#include <stdio.h>

int main()
{
    int array[10], i, j;
    for (i = 0; i <= 9; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (array[i] > array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }
    printf("\nThe sorted array is:- \n");
    for (i = 0; i <= 9; i++)
        printf("Element array[%d]: %d\n",i,array[i]);
    return 0;
}