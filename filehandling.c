/*Write a program to read data from the keyboard, write it to a file called 
INPUT, again read the same data from the INPUT file, and display it on the 
screen.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
 FILE *fp;
 char data[255];
 
 fp = fopen("input.txt", "w");
 printf("Enter data: ");
 fgets(data, sizeof(data), stdin);
 fprintf(fp, "%s", data);
 fclose(fp);
 fp = fopen("input.txt", "r");
 printf("Reading data:\n");
 while (fgets(data, sizeof(data), fp) != NULL) 
 {
 printf("%s", data);
 }
 fclose(fp);
 return 0;
}
