#include <stdio.h>
void main()
{
    char alpha;
    int num;
    printf("Name: Grishma Makwana");
    printf("\nRoll No.: 23BIT108 \n");
    printf("Enter the character to be checked for: ");
    scanf("%c",&alpha);
    if(alpha>=97 && alpha <=122)
    {
        printf("Lowercase entered! \n");
        num=1;
    }
    else if (alpha>=65 && alpha<=90)
    {
        printf("Uppercase entered! \n");
        alpha+=32;
        num=1;
    }
    else
    {
        printf("Please enter only alphabets! \n");
    }
    if(num==1)
    {
        if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
        {
            printf("The entered character is a vowel.");
        }
        else
        {
            printf("The entered character is a consonant.");
        }
    }
    
}