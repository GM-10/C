//Write a program using pointers to compute the sum of all elements stored in an array.

#include<stdio.h> 
int main() 
{ 
int ary[3],i,sum=0,*a=ary; 

for (i=0;i<3;i++) 
 { 
 printf("ary[%d]=",i+1); 
 scanf("%d",&ary[i]); 
 } 
for(i=0;i<3;i++) 
 { 
 sum+=*a; 
 a++; 
 } 
printf("Sum of elements in the array: %d\n", sum); 
return 0; 
}
