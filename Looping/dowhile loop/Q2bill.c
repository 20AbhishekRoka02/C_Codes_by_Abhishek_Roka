// Write the program to print the bill for the following program
// Items Rates _
// 1.) Tea Rs. 5.00/-
// 2.) Burger Rs. 8.00/-
// 3.) Dosa Rs. 25.00/-
// 4.) Exit
// Enter your choice:-
// If the choice if less than 4, then input
// Enter the quantity :-
// and print the bill in the following format
// You have ordered 3 tea
// and your bill is Rs. 15.00/- only

# include<stdio.h>

int main(){
    int n=1,option, qty;
    float price, amt;

    do
    {
        printf("Items             Rates\n");
        printf("1.) Tea         Rs. 5.00/-\n");
        printf("2.) Burger      Rs. 8.00/- \n");
        printf("3.) Dosa        Rs. 25.00/-\n");
        printf("4.) Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&option);

        if ((option < 4) && (option > 0))
        {
            printf("Enter the quantity: ");
            scanf("%d",&qty);

            if (qty < 0)
            {
                printf("Quantity cannot be negative.\n\n");
                continue;
            }

            switch (option)
            {
            case 1:                
                printf("\nYou  have ordered %d tea\nand your bill is Rs. %.2f/- only\n\n", qty, 5.0 * (float) qty);
                break;

            case 2:
                printf("\nYou  have ordered %d burger\nand your bill is Rs. %.2f/- only\n\n", qty, 8.0 * (float) qty);
                break;
            
            case 3:
                printf("\nYou  have ordered %d dosa\nand your bill is Rs. %.2f/- only\n\n", qty, 25.0 * (float) qty);
                break;
            }
        }
        else if (option == 4)
        {
            n=0;
            printf("\nProgram Terminated!\n");
        }
        else
        {
            printf("\nEnter number in range of 1 to 4.\n");
        }
        
        
        

        

    } while (n);
    
    return 0;
}