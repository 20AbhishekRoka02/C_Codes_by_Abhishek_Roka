# include<stdio.h>

int main(){
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length;
    for (int i=0; str[i] != '\0'; i++)
    {
        length = i;
    }
    printf("Length of given string: %d\n",length+1);
    return 0;
}   