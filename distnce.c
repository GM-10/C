/*The total distance travelled by a vehicle in t seconds is given
by distance = ut + (at2)/2 where u is the initial velocity
(metres per second), a is the acceleration (metres persecond2). 
Write a program to evaluate the distance travelled
at regular intervals of time, given the values of u and a. The
program should provide the flexibility to the user to select
his own time intervals and repeat the calculations for
different values of u and a.*/
#include <stdio.h>
int main()
{
 float s,u,a,t;

 printf("Enter the value of the initial velocity: ");
 scanf("%f",&u);
 printf("Enter the value of the acceleration: ");
 scanf("%f",&a);
 printf("Enter the value of time interval taken: ");
 scanf("%f",&t);
 s=(u*t)+(0.5*a*t*t);
 printf("Distance travelled is %.2f.",s);
 return 0;
}