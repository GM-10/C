/*Create a structure RoomCondition with members {humidity, temperature 
and AQI}. Write a program to scan five readings of room condition and display 
the average room condition based on these readings.
*/
#include<stdio.h>
struct RoomCondition
{
 int humidity,temp,aqi;
};
void main()
{
 struct RoomCondition a[5];
 int i;
 float avghum=0, avgtemp=0, avgaqi=0;
 int sumhum=0, sumtemp=0, sumaqi=0;

 for(i=1;i<=5;i++)
 {
 printf("Humidity reading %d: ",i);
 scanf("%d",&(a[i].humidity));
 sumhum+=a[i].humidity;
 printf("Temperature reading %d: ",i);
 scanf("%d",&(a[i].temp));
 sumtemp+=a[i].temp;
 printf("AQI reading %d: ",i);
 scanf("%d",&(a[i].aqi));
 sumaqi+=a[i].aqi;
 }
 avghum=sumhum/i;
 avgtemp=sumtemp/i;
 avgaqi=sumaqi/i;
 printf("The average humidity of the room is %.2f.\n The average temperature of the room is 
%.2f.\n The average AQI f the room is %.2f.",avghum,avgtemp,avgaqi);
}
