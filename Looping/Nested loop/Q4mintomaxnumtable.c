// Input any two numbers and print minimum to maximum number’s table. 

# include<stdio.h>

int main(){
    int num1, num2, min, max; 

    printf("num1 = ");
    scanf("%d", &num1);

    printf("num2 = ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;
    min = (num1 < num2) ? num1 : num2;

    for (int i = min; i < max + 1; i++)
    {
        printf("\nTable  of %d\n", i);
        for (int j = 0; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }

    return 0;
}
