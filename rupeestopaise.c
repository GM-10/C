/*Write a program to read the price of an item in decimal
form (like 15.95) and print the output in paise (like
1595 paise).
*/
#include<stdio.h>
void main()
{
 float rupee;
 int paise;

 printf("ENter the rupee value: ");
 scanf("%f",&rupee);
 paise=rupee*100;
 printf("The value in paise is: %d",paise);
}
