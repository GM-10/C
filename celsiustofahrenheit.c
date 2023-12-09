//Write a program to convert Celsius to Fahrenheit and Fahrenheit to Celsius
#include<stdio.h>
void main()
{
 int choice;
 float fahre,cels;
 
 printf("Press 1- To convert celsius to Fahrenheit \nPress 2- To convert Fahrenheit to 
celsius.\n");
 scanf("%d",&choice);
 if (choice==1)
 {
 printf("Enter Celsius value: ");
 scanf("%f",&cels);
 fahre=(1.8*cels)+32;
 printf("The fahrenheit value is %f ",fahre);
 }
 else if (choice==2)
 {
 printf("Enter Fahrenheit value: ");
 scanf("%f",&fahre);
 cels=(fahre-32)/1.8;
 printf("The celsius value is %f ",cels);
 }
 else{ printf("Enter valid choice.");}
}
