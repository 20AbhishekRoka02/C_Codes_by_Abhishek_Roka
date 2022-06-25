// input any name and reverse it

#include <stdio.h>

int main()
{

    char str[100]= "";
    printf("Name: ");
    gets(str);

    int len, length;
    // printf("Enter any string:-");

    // gets(str);
    for (len = 0; str[len] != '\0'; len++);    
    length = len;

    int right = length - 1;
    char temp;


    for (int i=0; i < right; i++)
    {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    
    
    printf("%s",str);
    printf("\n");


    

    return 0;
}
