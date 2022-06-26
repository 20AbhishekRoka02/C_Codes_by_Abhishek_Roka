// input any two strings and compare them wether they are length wise equal or not.
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

    if (lenstr1 == lenstr2)
    {
        printf("\nBoth strings are of equal length.\n");
        
    }
    else if (lenstr1 < lenstr2)
    {
        printf("\nLength of %s is the greatest.\n", str2);
    }
    else
    {
        printf("\nLength of %s is the greatest.\n", str1);
    }
    
    
    
    
    return 0;
}