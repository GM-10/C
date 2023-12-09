/*A point on the circumference of a circle whose centre
is (o, o) is (4,5). Write a program to compute the
perimeter and area of the circle*/
#include<stdio.h>
#include<math.h>
void main()
{
 float r, peri,area;

 r=sqrt(((4-0)*(4-0))+((5-0)*(5-0)));
 printf("The radius is %f \n",r);
 peri=2*3.14*r;
 printf("The perimeter is %f \n",peri);
 area= 3.14*r*r;
 printf("The area is %f \n",area);
}