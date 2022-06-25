#include <stdio.h>

int main()
{
    int a, b, k;

    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    k = a;
    a = b;
    b = k;


    printf("Numbers after swap:-\n");
    printf("a = %d\nb = %d", a, b);

    return 0;

}