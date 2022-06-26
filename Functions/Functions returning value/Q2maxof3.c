// To find the maximum between three inputted numbers through function.

# include<stdio.h>

float max_of_3(float a, float b, float c);

int main(){

    float num1, num2, num3;

printf("num1 = ");
scanf("%f", &num1);
    
    printf("num2 = ");
    scanf("%f", &num2);

    printf("num3 = ");
    scanf("%f", &num3);

    printf("\nGreatest of 3 is: %.2f\n", max_of_3(num1, num2, num3));

    
    return 0;
}

float max_of_3(float a, float b, float c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}