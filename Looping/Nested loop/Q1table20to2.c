// Print 20 to 2 tables.

# include<stdio.h>

int main(){
    for (int i = 20; i > 1; i--)
    {
        printf("\nTable of %d\n",  i);

        for (int j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }

    }
    return 0;
}
