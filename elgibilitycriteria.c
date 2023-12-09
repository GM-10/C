/*Admission to a professional course is subject to the following conditions:
Marks in Mathematics>=60
Marks in physics>=50 
Marks in chemistry>=40
total in all three subject>=200 or toal in mathematics and physics >=150
Given the marks o the three subjects, write a program to process the 
applications to list whether the candidate is eligible or not.
*/
#include <stdio.h>
int main()
{
 int maths,phys,chem,total,totalmp;

 printf("Enter the marks in Mathematics: ");
 scanf("%d",&maths);
 printf("Enter the marks in Physics: ");
 scanf("%d",&phys);
 printf("Enter the marks in Chemistry: ");
 scanf("%d",&chem);
 total=maths+phys+chem;
 totalmp=maths+phys;
 if(maths>=60 && phys>=50 && chem>=40 && (total>=200 || totalmp>=150))
 {
 printf("The applicant is eligible.");
 }
 else
 { 
 printf("The apllicant is not eligible.");
 }
 
 return 0;
}
