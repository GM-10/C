/*An electricity board charges the following rates for the use of electricity:
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs 1.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount 
is more than Rs. 400, then an additional surcharge of 15% of total amount is 
charged. Write a program to read the names of users and number of units 
consumed and print out the charges with names.
*/
#include <stdio.h> 
int main() 
{ 
 int nou,i; 
 float charge; 
 char name[10]; 

 printf("name:"); 
 scanf("%s",name); 
 printf("number of unit used:"); 
 scanf("%d",&nou); 
 for(i=0;i<10;i++) 
 printf("%c",name[i]); 
 if(nou<126) 
 { 
 charge=100; 
 printf("charge = %.2f",charge); 
 } 
 else if(nou<201 && nou>125) 
 { 
 charge = 0.80*nou; 
 printf("\ncharge = %.2f",charge); 
 } 
 else if(nou<301 && nou>200) 
 { 
 charge = 0.90*nou; 
 printf("\ncharge = %.2f",charge); 
 } 
 else if(nou>300 && nou<400) 
 { 
 charge = 1.0*nou; 
 printf("\ncharge = %.2f",charge); 
 } 
 else 
 { 
 charge = nou+(nou*0.15); 
 printf("\ncharge = %.2f",charge); 
 } 
 return 0; }