/*Write a program to append additional data to a pre-existing file and print 
the total contents of the file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 
 FILE *fs,*ft,*fp;
 char data[255];
 char source[67],target[67],str[80];

 fs=fopen("sample.txt","r");
 if (fs==NULL)
 {
 puts("Unable to open source file.");
 }
 ft=fopen("newsample.txt","a");
 if(ft==NULL)
 {
 fclose(fs);
 puts("Unable to open target file. ");
 }
 while(fgets(str,79,fs)!=NULL)
 {
 fputs(str,ft);
 }
 printf("Appending completed!\n");
 fclose(fs);
 fclose(ft);
 fp = fopen("newsample.txt", "r");
 printf("Reading data:\n");
 while (fgets(data, sizeof(data), fp) != NULL) 
 {
 printf("%s", data);
 }
 fclose(fp);
 return 0;
}