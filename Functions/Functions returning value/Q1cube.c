// To find the cube of an inputted number through function. 

# include<stdio.h>

float cube(float num);

int main()
{
    float n;
    printf("number = ");
    scanf("%f", &n);

    // float result = cube(n);

    printf("\n(%f)^3 = %f\n", n, cube(n));
    
    return 0;
}

float cube(float num)
{
    return num*num*num;
}