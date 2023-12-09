/* The price of one kg rice is RS. 16.75 and one kg of sugar is Rs.15. Write a 
program to get the quantity to be brought from the user and display the total 
bill in a formatted manner as we get from the supermarket.*/
#include<stdio.h>
void main()
{

 int rice, sugar;
 float ricep, sugarp, total;
 printf("Enter the amount of rice the user want. The price per kg is 16.75: ");
 scanf("%d",&rice);
 printf("Enter the amount of sugar the user want. The price per kg is 15: ");
 scanf("%d",&sugar);
 ricep=rice*16.75;
 sugarp=sugar*15;
 total=ricep+sugarp;
 printf("------------Bill------------- \n");
 printf("Item \t Quantity Price \t Amount \n ");
 printf("Rice \t %d \t 16.75 \t\t %.2f \n",rice,ricep);
 printf("Sugar \t %d \t 15.00 \t\t %.2f \n",sugar,sugarp);
 printf("--------------------------------\n");
 printf("Total : %.2f",total);
}
