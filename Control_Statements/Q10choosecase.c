// Write the code for the following with using case control.
// 1.) Sum of two inputted numbers
// 2.) Product of three inputted numbers
// 3.) Check whether inputted number even or odd.
// 4.) Find maximum between three numbers.
// Enter your choice :- 

# include<stdio.h>

int main(){
    int num1, num2, num3, option;

    printf("Options are:-\n");
    printf("1.) Sum of two inputted numbers\n");
    printf("2.) Product of three inputted numbers\n");
    printf("3.) Check whether inputted number even or odd.\n");
    printf("4.) Find maximum between three numbers.\n");
    printf("Enter your choice: ");

    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("num1 =  ");
        scanf("%d",&num1);

        printf("num2 = ");
        scanf("%d",&num2);

        printf("%d + %d = %d", num1, num2, num1 + num2);

        break;


    case 2:
        printf("num1 =  ");
        scanf("%d",&num1);

        printf("num2 = ");
        scanf("%d",&num2);

        printf("num3 = ");
        scanf("%d",&num3);

        printf("%d x %d x %d = %d", num1, num2, num3, num1 * num2 * num3);
        break;
    case 3:
        printf("num = ");
        scanf("%d",&num1);

        if (num1%2 == 1)
        {
            printf("%d is odd.",num1);
        }
        else
        {
            printf("%d is even.",num1);/* code */
        }
        
        break;
    case 4:
        printf("num1 =  ");
        scanf("%d",&num1);

        printf("num2 = ");
        scanf("%d",&num2);

        printf("num3 = ");
        scanf("%d",&num3);

        printf("Maximum of three is: %d", (num1 > num2)? ((num1 > num3)? num1 : num3) : (( num2 > num3) ? num2 : num3));

        break;
    
    default:
        printf("Enter number in range 1 to 4.\n");
        break;
    }


    
    
    return 0;
}
