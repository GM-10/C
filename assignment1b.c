#include <stdio.h>
void main()
{
    int age;
    float height;
    char name;
    double weight;
    long phno;
    short zip;
    unsigned pets;
    signed diff;
    printf("Name: Grishma Makwana");
    printf("\nRoll No.: 23BIT108 \n\n\n");

    printf("Enter the intials of the name of the person: ");
    scanf("%c",&name);
    printf("Enter the age of the peson: ");
    scanf("%d",&age);
    printf("Enter the height of the person: ");
    scanf("%f",&height);
    printf("Emter the weight of the person: ");
    scanf("%lf",&weight);
    printf("Enter the phone number of the person: ");
    scanf("%ld",&phno);
    printf("Enter the zip code: ");
    scanf("%hd",&zip);
    printf("Enter the number of pets the person have: ");
    scanf("%u",&pets);
    printf("Enter the difference between the income and the expense of the person: ");
    scanf("%d",&diff);
    
    printf("The age of the person is %d years. \n",age);
    printf("The height of the person is %.2f meters. \n",height);
    printf("The initial of the person's name is %c. \n",name);
    printf("The weight of the person is %.2lf kilograms.\n",weight);
    printf("The phone number of the person is %ld.\n",phno);
    printf("The zip code of the peron's address is %hd.\n",zip);
    printf("The number of pets owned by the person is %u.\n",pets);
    printf("The difference between the income and expense of the person is $ %d.\n",diff);
}