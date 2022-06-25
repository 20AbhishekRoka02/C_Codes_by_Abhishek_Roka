//  input any 10 numbers in an array and print only even numbers.
# include<stdio.h>

int main(){
    int array[10], num=0;
    for (int i=0; i<10; i++)
    {
        printf("num%d = ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n");
    for (int i=0; i<10; i++)
    {
        if (array[i]%2==0)
        {
            num = 1;
            printf("%d is a even number.\n", array[i]);
        }
        
    }

    if (num == 0)
    {
        printf("Array has no even number.\n");
    }


    return 0;
}