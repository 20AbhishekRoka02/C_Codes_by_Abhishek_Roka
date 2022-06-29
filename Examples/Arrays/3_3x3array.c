#include <stdio.h>

int main()
{
    int n[3][3], i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Enter array[%d][%d]: ",i,j);
            scanf("%d", &n[i][j]);
        }
    }
    printf("\nThe matrix is :-\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {

            printf("Element array[%d][%d]: %d\n",i,j,n[i][j]);
        }
        
    }

    return 0;
}