// To find the factorial of an inputted number by using a function

# include<stdio.h>

int factorial (int n);

int main(){
    int num;
    printf("num = ");
    scanf("%d",&num);

    printf("\nFactorial  of %d : %d\n", num, factorial(num));
        
    return 0;
}

int factorial (int n)
{
    int fact=1;
    for (n; n>0; n--)
    {
        fact *= n;
    }

    return fact;
}