// Lab 3
/*1.   At the ticket counter of football stadium, people come in queue and purchase tickets.
 	Arrival rate of customers is 1/min. It takes at the average 20 seconds 
 to purchase the ticket. WAP in C to calculate total time spent by a sports fan 
 to be seated in his seat if it takes 1.5 minutes to reach the
   correct seat after purchasing the ticket. 
   if a fan comes exactly before 2 minutes before the game starts,
   can sports fan expects to be seated for the kick-off?
 */  

#include<stdio.h>
#include<conio.h>
int main()
{
float lamda,u,ws,ts,time_to_seat,a,total;

printf("\n Given the following information:");

printf("\n Arrival Rate = %.2f customers per minute\n",lamda);
lamda=1;  // Arrival Rate per minute

printf("\n\n takes 1.5 min to reach correct seat");
time_to_seat = 1.5 *60; // Time to reach the correct seat

printf("\n \n It takes average 20 sec to purchase the ticket");
ts=20;   //  Service Time in seconds
u=60/ts;  // Service rate per minute
printf("\n\n Service rate u=%.2f customer per minute\n",u);
ws= 1/(u-lamda)*60; // waiting time in the system
printf("\n waiting time in the system=%.2f seconds\n ",ws);

printf("\n\n Enter Arrival Time in minutes \t: ");
scanf("%f",&a);

a= a*60;  // Arrival time in seconds
 
total=(ws+time_to_seat);

if(total<=a)
printf("\n Sports fan be seated in stadium before kick off");
else
printf("\nSports fan cant be seated in stadium before kick off");
getch();
return 0;
}
