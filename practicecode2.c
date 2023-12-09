#include<stdio.h>
int main()
{
    int num, sum=0, pos=0, neg=0, zero=0;
    while(sum<=999)
    {
        printf("Enter a number between 10 to 99 +ve or -ne: ");
        scanf("%d",&num);
        sum+=num;
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
        else
        zero++;
    }
    printf("Sum is %d. \nPositive number are %d. \nNegative number are %d. \nZero are %d\n.",sum,pos,neg,zero);
}