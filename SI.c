#include <stdio.h>
void main()
{
 int princi,time;
 float si;

 printf("Enter the principle amount: ");
 scanf("%d",&princi);
 printf("Enter the time: ");
 scanf("%d",&time);
 si=(princi*time*10)/100;
 printf("The simple interest is %f",si);
}