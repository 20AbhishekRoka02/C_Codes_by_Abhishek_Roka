#include <stdio.h>

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);        
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Element array[%d]: %d\n",i,array[i]);
        
    }

    return 0;
}
