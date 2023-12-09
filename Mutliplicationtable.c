/*Write a program to output the following multiplication table for any number 
and display the output in the following format: 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15 
. . . .
5 * 10 = 50
*/
#include <stdio.h>
int main()
{
 int i;
 int a=5;

 for(i=1;i<=10;i++)
 printf("%d X %d = %d \n",a,i,a*i);
 return 0;
}