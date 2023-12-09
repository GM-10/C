/*Write a program to read 10 numbers and calculate sum and mean of the 
numbers, calculate variance, and calculate standard deviation.
*/
#include <stdio.h>
#include <math.h>
void main()
{
 int n,a[10],sum=0,i,j;
 float mean=0,variance=0,sd=0;

 printf("Enter ten numbers: \n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 sum+=a[i];
 }
 printf("Sum is %d\n",sum);
 mean=sum/i;
 printf("Mean is %0.2f\n",mean);
 for(j=0;j<10;j++)
 {
 variance+=(a[j]-mean)*(a[j]-mean);
 }
 variance=variance/i;
 printf("Variance is %0.2f.\n",variance);
 sd=sqrt(variance);
 printf("Standarad deviation is %0.2f.\n ",sd);
}