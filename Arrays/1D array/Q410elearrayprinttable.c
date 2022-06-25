// Input any numbers in 10-elements array and print table of all the numbers.
#include <stdio.h>

int main()
{

    int array[10], num;
    for (int i = 0; i < 10; i++)
    {
        printf("num%d = ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nTable of %d\n", array[i]);
        num = array[i];

        for (int j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n", num, j, num * j);
        }
    }
    return 0;
}
