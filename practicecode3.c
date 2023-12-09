#include<stdio.h>
int main()
{
    int place=1,rem=0,decimal,binary=0;
    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    while(decimal!=1)
    {
        
        rem=decimal%2;
        decimal=decimal/2;
        binary+=rem*place;
        place=place*10;
    }
    binary+=decimal*place;
    printf("Binary number is: %d",binary);
}