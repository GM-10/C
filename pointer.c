//Write a program to print the address of a variable along with its value.

#include<stdio.h> 
void main() 
{ 
int a; 
 
scanf("%d",&a); 
printf("The value of a is %d\n",a); 
printf("The address of a is %d",&a); 
}