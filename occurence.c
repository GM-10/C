/*Write a program that will count the number occurrences of a specified 
character in a given line of text. 
*/
#include <stdio.h>
int main() 
{
 int count = 0;
 char text[100];
 char search_char;

 printf("Enter the text here:");
 gets(text);
 printf("Enter a character to count the number occurences here:");
 scanf(" %c", &search_char);
 for (int i = 0; text[i] != '\0'; i++)
 {
 if (text[i] == search_char)
 count++;
 }
 printf("Occurrences of '%c' in the text: %d\n", search_char, count);
 return 0;
}