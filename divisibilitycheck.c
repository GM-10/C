/*Write a program to print all integers that are not divisible by either 2 or 3 and 
lie between 1 and 100. The program should also count the number of such 
integers and print the result.
*/
#include <stdio.h>
int main()
{
 int i,a=0;
 
 printf("The numbers that are not divisible by either 2 or 3 are: \n");
 for(i=1;i<=100;i++)
 {
 if(i%2!=0 || i%3!=0)
 {
 printf("%d \t",i);
 a++;
 }
 }
 printf("\nTotal number of digits between 1 to 100 that are not divisible by either 2 or 3 are: 
%d",a);
 return 0;
}
