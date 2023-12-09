// Write a program to add, subtract, multiply and divide two numbers by taking the input from the user.
#include<stdio.h>
void main()
{
 int a,b,res;

 printf("Enter first number:");
 scanf("%d",&a);
 printf("Enter second number:");
 scanf("%d",&b);
 res=a+b;
 printf("The sum of %d and %d is %d. \n",a,b,res);
 res=a-b;
 printf("The difference of %d and %d is %d. \n",a,b,res);
 res=a*b;
 printf("The product of %d and %d is %d. \n",a,b,res);
 res=a/b;
 printf("The division of %d and %d is %d. \n",a,b,res);
}