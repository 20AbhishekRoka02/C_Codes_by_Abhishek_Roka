//  Input any three numbers and print the table of maximum number. 

# include<stdio.h>

int main(){
    
    float num1,num2,num3,max;

    printf("num1 = ");
    scanf("%f",&num1);

    printf("num2 = ");
    scanf("%f",&num2);

    printf("num3 = ");
    scanf("%f",&num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);


    float i = 1;
    while (i<11)
    {
        printf("%f x %f = %f\n",max,i,max*i);
        i++;
    }
    return 0;
}