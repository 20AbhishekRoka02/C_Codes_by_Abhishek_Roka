#include <stdio.h>

int main()
{
    int m, n, s;
    printf("Enter the first no: ");     
    scanf("%d", &m);

    printf("Enter the second no: ");
    scanf("%d", &n);
    
    s = m + n;
    printf("\n The sum of %d and %d is %d", m, n, s);
    return 0;
}
