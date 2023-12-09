#include<stdio.h>
void power(int a, int b)
{
    int ans=1;
    for(int i=1; i<=b;i++)
    {
        ans*=a;
    }
    printf("Answer is %d",ans);
}
int main()
{
    int a,b;
    printf("Enter the base :");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    power(a,b);
    return 0;
}