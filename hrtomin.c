//Write a program to convert hours into minutes and minutes to hours
#include<stdio.h>
void main()
{
 int choice; 
 float hr,min;

 printf("Press 1-To convert Hours to minute \n Press 2- To convert minutes to hours. \n");
 printf("Enter your choice: ");
 scanf("%d",&choice);
 if(choice==1)
 {
 printf("Enter the no.of hours to be converted to minutes: ");
 scanf("%f",&hr);
 min=hr*60;
 printf("The no. of mins is %f. ",min);
 }
 else if(choice==2)
 {
 printf("Enter the no.of minutes to be converted to hours: ");
 scanf("%f",&min);
 hr=min/60;
 printf("The no. of hours is %f. ",hr);
 }
 else
 {
 printf("Enter the valid choice.");
 }
}