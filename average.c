//Write a program to calculate the average of set of N numbers.

#include <stdio.h>
int main()
{
 int n,i,sum=0;
 float avg;

 printf("Enter the value of N for which you want to find the average: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 sum+=i;
 }
 avg=sum/n;
 printf("The average value of N numbers is: %f",avg);
 return 0;
}