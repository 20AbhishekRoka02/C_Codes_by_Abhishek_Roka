# include<stdio.h>

typedef struct items {
    char name[30];
    int qty;
    float rate;
} bill_item;


int main(){
    bill_item item;
    printf("Enter Item Name: ");
    scanf("%s", item.name);
    printf("Enter quantity wanted: ");
    scanf("%d", &item.qty);
    printf("Enter rate: ");
    scanf("%f",&item.rate);

    float rate = item.qty * item.rate;

    printf("You've ordered: %s\nYou bill is of Rs. %f/-\n",item.name, rate);


    
    return 0;
}