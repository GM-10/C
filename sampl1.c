#include <stdio.h> 

int main() 

{ 

    int maths,phys,chem,total,totalmp; 

printf("Name: Grishma Makwana \n");  

    printf("Roll No.: 23TBIT142 \n\n\n"); 

    printf("Enter the marks in Mathematics: "); 

    scanf("%d",&maths); 

    printf("Enter the marks in Physics: "); 

    scanf("%d",&phys); 

    printf("Enter the marks in Chemistry: "); 

    scanf("%d",&chem); 

    total=maths+phys+chem; 

    totalmp=maths+phys; 

    if(maths>=60 && phys>=50 && chem>=40 && (total>=200 || totalmp>=150)) 

    { 

        printf("The applicant is eligible."); 

    } 

    else 

    {  

        printf("The apllicant is not eligible."); 

    } 

     

    return 0; 

} 