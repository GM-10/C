#include <stdio.h> 

void main() 

{ 

    int a[10],n,pos=0,neg=0,zero=0; 

    printf("Name: Grishma Makwana \n");   

    printf("Roll No.: 23BIT108 \n\n\n");  

    printf("Enter the number of elements: "); 

    scanf("%d",&n); 

    printf("Enter the array elements: "); 

    for(int i=0;i<n;i++) 

        scanf("%d",&a[i]); 

    printf("Array is :\n"); 

    for(int j=0;j<n;j++) 

    { 

        printf("%d \t",a[j]); 

        if(a[j]>0) 

            pos++; 

        else if(a[j]==0) 

            zero++; 

        else 

            neg++; 

    } 

    printf("\nPositive number are: %d",pos); 

    printf("\n No. of zeros are %d.",zero); 

    printf("\nNegative number are : %d",neg); 

} 