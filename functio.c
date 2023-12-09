/*Given two integers 20 and 10, write a program that uses a function add( ) to 
add these two numbers and sub( ) to find the difference of these two numbers 
and then display the sum and difference in the following form:
20 + 10 = 30
20 – 10 = 10
…..*/
#include<stdio.h>
void main()
{
 int sum();
 int diff();
 int product();
 int division();
 int a,b,choice,ans;

 printf("Enter first number: ");
 scanf("%d",&a);
 printf("Enter second number: ");
 scanf("%d",&b);
 printf("Press 1-Addition\nPress 2-Subtraction\nPress 3-Multiplication\nPress 4-Division");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 ans=sum(a,b);
 printf("The answer is %d ",ans);
 break;
 case 2:
 ans=diff(a,b);
 printf("The answer is %d ",ans);
 break;
 case 3:
 ans=product(a,b);
 printf("The answer is %d ",ans);
 break;
 case 4:
 ans=division(a,b);
 printf("The answer is %d ",ans);
 break;
 default:
 printf("Enter the valid choice!");
 break;
 }
}
sum(int x, int y)
{
 int c;
 c=x+y;
 return c;
}
diff(int x, int y)
{
 int c;
 c=x-y;
 return c;
}
product(int x, int y)
{
 int c;
 c=x*y;
 return c;
}
division(int x, int y)
{
 int c;
 c=x/y;
 return c;
}