//Write a program that will compute the length of a given character string.

#include <stdio.h>
int main() {
 int length = 0;
 char str[50];

 printf("Enter a string: ");
 gets(str);
 while (str[length] != '\0')
 length++;
 printf("Length of the string: %d\n", length);
 return 0;
}