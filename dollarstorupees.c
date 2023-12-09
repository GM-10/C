//Write a program to convert dollars into rupees from the user’s input.
#include<stdio.h>
void main()
{
 int dollars;
 float rupee;

 printf("Enter the no. of dollars to be converted: ");
 scanf("%d",&dollars);
 rupee=dollars*83.5;
 printf("The Rupee is : %f ",rupee);
}