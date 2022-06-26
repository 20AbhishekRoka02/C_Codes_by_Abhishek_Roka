// To reverse the digits of a number. 

# include<stdio.h>

int reverse(int n);
int main(){

    int num;
    printf("num = ");
    scanf("%d", &num);

    printf("\nReverse number : %d\n", reverse(num));
    
    return 0;
}

int reverse(int n)
{
    int reverse_num = 0;

    while (n > 0)
    {
        reverse_num *= 10;
        reverse_num += n%10;
        n = n/10;
    }

    return reverse_num;

}