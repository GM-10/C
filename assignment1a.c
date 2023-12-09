#include <stdio.h>
void main()
{
    int num;
    float tax,amount;
    char sym;
    double subtotal,total;
    printf("Name: Grishma Makwana");
    printf("\nRoll No.: 23BIT108 \n");
    printf("Enter the symbol for transaction: ");
    scanf("%c",&sym);
    printf("Enter the total number of the item brought: ");
    scanf("%d",&num);
    printf("Enter the total amount of the item brought: ");
    scanf("%f",&amount);
    printf("Enter the tax rate: ");
    scanf("%f",&tax);
    subtotal=num*amount;
    total=(subtotal+((subtotal*tax)/100));
    printf("------------------------------");
    printf("\n Number of items: %d .\n Tax rate: %.2f .\n Subtotal: %c %.2lf .\n Total: %c %.2lf .",num,tax,sym,subtotal,sym,total);
    printf("\n");
    printf("------------------------------");
}