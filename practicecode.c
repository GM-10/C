#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the number till which you want ot find the harmonic progression:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("1/%d \t",i);
        sum+=1/(float)i;
    }
    printf("\nSum is %0.2f.",sum);
    return 0;
}