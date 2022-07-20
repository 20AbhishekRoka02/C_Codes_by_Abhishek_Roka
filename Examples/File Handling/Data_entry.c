# include<stdio.h>

int main(){

    char name[50];
    char rno[10];
    float marks;
    int no;

    printf("No. of students (of whom data is going to be entered): ");
    scanf("%d",&no);

    FILE *fp;
   
    fp = fopen("Data.txt","a");

    for (int i = 1; i < no+1; i++)
    {
        fflush(stdin);
        printf("\nRecord number: %d\n",i);

        printf("Student Roll no.: ");
        scanf("%s",rno);

        printf("Student name: ");
        scanf("%s",name);

        printf("Student marks: ");
        scanf("%f",&marks);

        fprintf(fp,"%s,%s,%f\n",rno,name,marks);   
        fflush(stdin);

    }
    fclose(fp);

    printf("\n\n--------Reading Data from the records--------\n");

    fp = fopen("Data.txt","r");

    char c;
    c = getc(fp);

    while (c != EOF)
    {
        printf("%c",c);
        c = getc(fp);
    }
    
    printf("\nTASK COMPLETED!");



    



    


    return 0;
}