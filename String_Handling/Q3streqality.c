// input any two strings and check wether they are equal or not

# include<stdio.h>

int main(){
    char str1[50], str2[50];
    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    int lenstr1, lenstr2;

    for (int i=0; str1[i] != '\0'; i++)
    {
        lenstr1 = i;
    }

    for (int i=0; str2[i] != '\0'; i++)
    {
        lenstr2 = i;
    }

    int counter =  0;

    if (lenstr1 == lenstr2)
    {
        for (int i=0;  i<lenstr1; i++)
        {
            if ((int) str1[i] != (int) str2[i])
            {
                printf("\nStrings are not equal.\n");
                counter = 1;
                break;                
            }
        }
        if (counter == 0)
        {
            printf("\nStrings are equal.\n");
        }
    }
    else
    {
        printf("\nStrings are not equal.\n");

    }
    return 0;
}