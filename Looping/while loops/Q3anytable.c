// input ANY number and print it’s table.

# include<stdio.h>

int main(){
    float num;
    printf("number = ");
    scanf("%f",&num);

    float i = 1;
    while (i<11)
    {
        printf("%f x %f = %f\n",num,i,num*i);
        i++;
    }

    
    
    return 0;
}