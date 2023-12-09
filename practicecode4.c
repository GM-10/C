#include<stdio.h>
struct data
{
    char name[20];
    int age;
};
void count();
int main()
{
    struct data employee[10];
    for(int i=0;i<10;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Name: ");
        scanf("%s",employee[i].name);
        printf("Age: ");
        scanf("%d",&employee[i].age);
    }
    printf("---------------------------");
    printf("\nName\tAge\n");
    printf("---------------------------");
    for(int i=0;i<9;i++)
    count(employee[i].name,employee[i].age);
return 0;}
void count(char name[30],int age)
{
    int num=0;
        if(age<60 && age>50)
        {
            num++;
            printf("\n%s\t%d",name,age);
        }
}