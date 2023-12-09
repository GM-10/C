/*Write a program to compute and display the sum of all integers that are 
divisible by 6 but not divisible by 4 and lie between 0 and 100. The program 
should also count and display the number of such values.
*/
#include <stdio.h>
int main()
{
 int i,sum=0,a=0;

 printf("The number not divisible by 4 but divisible by 6 lying between 0 to 100 are: ");
 for(i=0;i<=100;i++)
 {
 if(i%6==0 && i%4!=0)
 {
 printf("%d \n",i);
 sum+=i;
 a++;
 }
 }
 printf("The sum of such numbers is %d. \n",sum);
 printf("The total is %d.\n",a);
 return 0;
}
