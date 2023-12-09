/*Define a structure type, struct personal that would contain person name, date 
of joining and salary. Using this structure, write a program to read this 
information for one person from the keyboard and print the same on the 
screen.*/

#include<stdio.h>
struct date
{
 int d,m,y;
};
struct personal
{
 
 char name[10];
 struct date dt;
 int salary;
}per;
void main()
{
 

 printf("Enter the name of the employee: "); 
 scanf("%s",per.name);
 printf("Enter the salary of the employee: ");
 scanf("%d",&per.salary);
 printf("Enter the date of joining date:");
 scanf("%d",&(per.dt.d));
 printf("Enter the date of joining month:");
 scanf("%d",&(per.dt.m));
 printf("Enter the date of joining year:");
 scanf("%d",&(per.dt.y));
 printf("Name of the employee is %s. \n Date of joining: %d.%d.%d.\n Salary of the employee 
is %d.",per.name,(per.dt.d),(per.dt.m),(per.dt.y),per.salary);
}