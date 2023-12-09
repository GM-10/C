#include <stdio.h>
int main()
{
    int i,j,a=0;
    printf("Name: Grishma Makwana \n"); 
    printf("Roll No.: 23TBIT142 \n\n\n"); 
    printf("The prime numbers between 100 and 200 are: ");
    for(i=100;i<=200;i++)
    {
        for(j=2;j<i;j++)
        if(i%j==0)
        {
            a=1;
            break;
        }
        if(a==0)
        {
            printf("%d \n",i);
        }
    }
   
}