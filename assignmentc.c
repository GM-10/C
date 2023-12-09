#include <stdio.h>
void main()
{
    int num,rev,temp,num1;
    temp=0;
    printf("Name: Grishma Makwana");
    printf("\nRoll No.: 23BIT108 \n\n\n");
    printf("Enter the number(5-digit):");
    scanf("%d",&num);
    num1=num;
    temp=num/10000;
    rev=temp;
    num=num-(temp*10000);
    temp=num/1000;
    rev=rev+(temp*10);
    num=num-(temp*1000);
    temp=num/100;
    rev=rev+(temp*100);
    num=num-(temp*100);
    temp=num/10;
    rev=rev+(temp*1000);
    num=num-(temp*10);
    temp=num/1;
    rev=rev+(temp*10000);
    printf("%d",rev);
    if(num1==rev)
    {
        printf("\nThe Number is a palindrom.");
    }
    else
    {
        printf("\nThe number is not a palindrom.");
    }
}