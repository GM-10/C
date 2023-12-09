/*Write a program to read two matrices A and B and print the following:
(i) A + B; and (ii) A – B.
*/
#include<stdio.h> 
void main() 
{ 
 int A[2][2], B[2][2] , i,j; 

 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 scanf("%d",&A[i][j]); 
 } 
 }
 printf("A=\n"); 
 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 printf(" %d ",A[i][j]); 
 } 
 printf("\n"); 
 } 
 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 scanf("%d",&B[i][j]); 
 } 
 } 
 printf("B=\n");
 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 printf(" %d ",B[i][j]); 
 } 
 printf("\n"); 
 }
 printf("A+B=\n"); 
 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 printf(" %d ",A[i][j]+B[i][j]); 
 } 
 printf("\n"); 
 } 
 printf("A-B=\n"); 
 for(i=0;i<2;i++) 
 { 
 for(j=0;j<2;j++) 
 { 
 printf(" %d ",A[i][j]-B[i][j]); 
 } 
 printf("\n"); 
 } 
}
