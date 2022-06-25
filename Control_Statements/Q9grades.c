//to print the grade of a student according to the following rules after inputting the percentage

// Percentage Grade
// 80 to 100 Distinction
// 60 to 79 First Division
// 50 to 59 Second Division
// 40 to 49 Third Division
// 0 to 39 Fail 

# include<stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f",&percentage);

    if ((percentage >=80) && (percentage <=100))
    {
        printf("Distinction\n");
    }
    else if ((percentage >=60) && (percentage <=79))
    {
        printf("First Division\n");
    }
    else if ((percentage >=50) && (percentage <=59))
    {
        printf("Second Division\n");
    }
    else if ((percentage >=40) && (percentage <=49))
    {
        printf("Third Division\n");
    }
    else if ((percentage >=0) && (percentage <=39))
    {
        printf("Fail\n");
    }
    else
    {
        printf("Enter data in range of 1 to 100\n");
    }
    

    
    return 0;
}