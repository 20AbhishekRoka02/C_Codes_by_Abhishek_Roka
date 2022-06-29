#include <stdio.h>

int main()
{

    int ch, i;
    do
    {
        
        printf("\n 1.) Table of 2");
        printf("\n 2.) Table of 5");
        printf("\n 3.) Table of 8");
        printf("\n 4.) Exit");
        printf("\n\nEnter your choice :- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 1; i <= 10; i++)
                printf("%d x %d = %d\n",2,i, 2 * i);

            break;
        case 2:
            for (i = 1; i <= 10; i++)
                printf("%d x %d = %d\n",5,i, 5 * i);

            break;
        case 3:

            for (i = 1; i <= 10; i++)
                printf("%d x %d = %d\n",8,i, 8 * i);

            break;
        case 4:
            break;
        default:
            printf("\n\nWrong Choice!");
        }
    } while (ch != 4);
    return 0;
}
