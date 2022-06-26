// To print whether an inputted number even or odd.

#include <stdio.h>

void evenOdd(int n);

int main()
{
    int num;
    printf("num = ");
    scanf("%d", &num);
    evenOdd(num);

    return 0;
}

void evenOdd(int n)
{

    
        if (n % 2 == 0)
        {
            
            printf("%d is a even number.\n", n);
        }
        else
        {
            printf("%d is an odd number.\n", n);
        }
        
        
    
}
