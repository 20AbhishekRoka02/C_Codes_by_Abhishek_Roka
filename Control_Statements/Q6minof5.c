#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter 1st number: ");
    scanf("%d",&m);

    printf("Enter 2nd number: ");
    scanf("%d",&n);

    if (m > n)
    {
        m = n;
    }

    printf("Enter 3rd number: ");
    scanf("%d",&n);

    if (m > n)
    {
        m = n;
    }

    printf("Enter 4th number: ");
    scanf("%d",&n);

    if (m > n)
    {
        m = n;
    }

    printf("Enter 5th number: ");
    scanf("%d",&n);

    if (m > n)
    {
        m = n;
    }


    printf("Minimun of 5 given numbers is: %d\n", m);


    

    

    return 0;

}