// Input any two numbers and print the table of their multiplication.

#include <stdio.h>

int main()
{
    float num1, num2, mul;
    printf("num1 = ");
    scanf("%f", &num1);

    printf("num2 = ");
    scanf("%f", &num2);

    mul = num1 * num2;
    float i = 1;
    while (i < 11)
    {
        printf("%f x %f = %f\n", mul, i, mul * i);
        i++;
    }

    return 0;
}