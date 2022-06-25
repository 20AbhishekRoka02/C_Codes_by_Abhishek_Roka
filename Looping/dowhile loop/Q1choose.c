// Write the code for the following program
// 1.) Inputted numbers table
// 2.) 2 to 20 tables
// 3.) 20 to 2 tables
// 4.) Check whether inputted number prime or not.
// 5.) Exit
// Enter your choice :

#include <stdio.h>

int main()
{
    int n = 1,  checknum, counter=0;
    float num;

    do
    {
        int option;
        printf("Choose an option:-\n");
        printf("1.) Inputted numbers table\n");
        printf("2.) 2 to 20 tables\n");
        printf("3.) 20 to 2 tables\n");
        printf("4.) Check whether inputted number prime or not.\n");
        printf("5.) Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("number = ");
            scanf("%f", &num);

            float i = 1;
            while (i < 11)
            {
                printf("%f x %f = %f\n", num, i, num * i);
                i++;
            }
            printf("\n");
            break;
        case 2:
            for (int i = 2; i < 21; i++)
            {
                printf("\nTable of %d\n", i);

                for (int j = 1; j < 11; j++)
                {
                    printf("%d x %d = %d\n", i, j, i * j);
                }
            }
            printf("\n");
            break;
        case 3:
            for (int i = 20; i > 1; i--)
            {
                printf("\nTable of %d\n", i);

                for (int j = 1; j < 11; j++)
                {
                    printf("%d x %d = %d\n", i, j, i * j);
                }
            }
            printf("\n");
            break;
        case 4:
            
            printf("Enter a number: ");
            scanf("%d", &checknum);

            for (int i = 2; i < checknum; i++)
            {
                if (checknum % i == 0)
                {
                    printf("%d is not a prime number.\n", checknum);
                    counter = 1;
                    break;
                }                
            }

            if (counter == 0)
            {
                printf("%d is a prime number.\n", checknum);
            }

            printf("\n");
            break;
        case 5:
            n = 0;            
            break;

        default:
            printf("Enter number in range of 1 to 5.\n");
            break;
        }

    } while (n);
    printf("Program Terminated!\n");

    return 0;
}