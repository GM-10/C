/*Write a program to count and print the number of negative and positive 
numbers in a given array from the user.*/
#include <stdio.h>
void main()
{
 int a[10],n,pos=0,neg=0,zero=0;

 printf("Enter the number of elements: ");
 scanf("%d",&n);
 printf("Enter the array elements: ");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Array is :\n");
 for(int j=0;j<n;j++)
 {
 printf("%d \t",a[j]);
 if(a[j]>0)
 pos++;
 else if(a[j]==0)
 zero++;
 else
 neg++;
 }
 printf("\nPositive number are: %d",pos);
 printf("\n No. of zeros are %d.",zero);
 printf("\nNegative number are : %d",neg);
}