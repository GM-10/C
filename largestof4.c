/*Write a program to find the largest number among the
inputted four numbers*/
#include <stdio.h>
int main()
{
 int a,b,c,d,max;
 printf("Enter the first number: ");
 scanf("%d",&a);
 printf("Enter the second number: ");
 scanf("%d",&b);
 printf("Enter the third number: ");
 scanf("%d",&c);
 printf("Enter the fourth number: ");
 scanf("%d",&d);
 if( a>b && a>c && a>d)
 {
 max=a;
 printf("The largest number is %d.",a);
 }
 else if( b>a && b>c && b>d)
 {
 max=b;
 printf("The largest number is %d.",b);
 }
 else if( c>a && c>b && c>d)
 {
 max=c;
 printf("The largest number is %d.",c);
 }
 else
 {
 max=d;
 printf("The largest number is %d.",d);
 }
 
 return 0;
}