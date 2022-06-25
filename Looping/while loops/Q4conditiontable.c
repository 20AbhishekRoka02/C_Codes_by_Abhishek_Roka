// Input any no and check whether it is even or odd. If the number is even then print table of 2 else. print table of 5.

#include <stdio.h>

int main()
{
    int num;
    printf("number = ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        int i = 1;
        while (i < 11)
        {
            printf("2 x %d = %d\n", i, 2 * i);
            i++;
        }
    }
    else
    {
        int i = 1;
        while (i < 11)
        {
            printf("5 x %d = %d\n", i, 5 * i);
            i++;
        }
    }

    return 0;
}