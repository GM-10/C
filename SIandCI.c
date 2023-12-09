/*Write a program to find the Simple Interest (SI) and compound interest (CI) of 
the user principal amount and time with fixed rate of interest as 10%. The 
program should ask the user his choice to compute the SI or the CI and based on 
the given choice appropriate function should be used.*/
#include <stdio.h> 
#include <math.h> 
float si() 
{
 float a,t,r=10,p; 
 printf("Enter the amount:"); 
 scanf("%f",&p); 
 printf("Enter the time:"); 
 scanf("%f",&t); 
 a=(p*r*t)/100; 
 return a; 
} 
float ci() 
{ 
 float q,d=10.0,x,y; 
 printf("Enter the amount:"); 
 scanf("%f",&x); 
 printf("Enter the time:"); 
 scanf("%f",&y); 
 q=x*pow((1+(d/100)),y)-x; 
 return q; 
} 
int main() 
{ 
 float g,h; 
 int c; 

 printf("Press 1-CI Press 2-SI\n"); 
 scanf("%d",&c); 
 switch (c)
 {
 case 1:
 printf("simple interest\n"); 
 g=si(); 
 printf("%f\n",g); 
 break;
 case 2:
 printf("compound interest\n"); 
 h=ci(); 
 printf("%f",h); 
 break;
 }
 return 0; }