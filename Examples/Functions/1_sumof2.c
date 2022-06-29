#include <stdio.h>

int sum(int, int); 
int main()
{
    
    int a, b, s;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    s = sum(a, b);
    printf("\nThe sum is %d", s);
    return 0;
}
int sum(int m, int n)
{
    return m + n;
}
