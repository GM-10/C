/*Given the values of the variables x, y and z, write a program
to rotate their values such that x has the value of y, y has the
value of z, and z has the value of x.*/
#include<stdio.h>
void main()
{
clrscr();
int temp,a,b,c;

printf(" Enter the first number: ");
scanf("%d",&a);
printf(" Enter the second number: ");
scanf("%d",&b);
printf(" Enter the third number: ");
scanf("%d",&c);
temp=a;
a=b;
b=c;
c=temp;
printf("After rotating the values %d %d %d",a,b,c);
getch();
}
