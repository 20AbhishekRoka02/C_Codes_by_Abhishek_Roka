// Input numbers in two 10-elements array and print their sum. 

# include<stdio.h>

int main(){
    int array[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("num%d = ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }

    printf("Sum = %d\n", sum);


    return 0;
}
