//Write a program to identify if the number is odd or even.
#include<stdio.h>
void main()
{
 int res,num;

 printf("Enter the number you want to check for: ");
 scanf("%d",&num);
 res=num%2;
 if(res==0)
 {
 printf("The %d is even.",num);
 }
 else
 {
 printf("The %d is odd.",num);
 }
}
