#include <stdio.h>
void main()
{
    float num1,num2,num3,sum;
    printf("Name: Grishma Makwana");
    printf("\nRoll No.: 23BIT108 \n");
    printf("Enter the first angle of the triangle: ");
    scanf("%f",&num1);
    printf("Enter the second angle of the triangle: ");
    scanf("%f",&num2);
    printf("Enter the third angle of the triangle: ");
    scanf("%f",&num3);
    sum = num1 + num2 + num3 ;
    if(sum==180)
    {
        printf("The entered angles form a triangle.");
    }
    else
    {
        printf("The entered angles does not make a triangle.");
    }
}