/* WAP to caculate and print ticket fare amount for selected vechical 

	AC Vechical	: Rs.12 per km
	Private Vehical : Rs.8 per Km
	Reservation : Rs.5 per Km
	Local Vehical : Rs.2 per Km

*/

#include<stdio.h>

void main()
{
	char city1[20], city2[20];
	int distance, choice;
	int fareamt;
	
	printf("\n Enter Name of City1 :");
	scanf("%s",&city1);
	
	printf("\n Enter Name of City2 :");
	scanf("%s",&city2);
	
	printf("\n Enter Distance :");
	scanf("%d",&distance);
	
	printf("\n 1. AC Vehical");
	printf("\n 2. Private Vehical");
	printf("\n 3. Reservation");
	printf("\n 4. Local Vehical");
	
	printf("\n Enter choice :");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("\n You selected AC Vehicle (Rs.12 per km)");
			fareamt = distance*12;
			break;
		case 2:
			printf("\n You selected Private Vehicle (Rs.8 per Km)");
			fareamt = distance*8;
			break;
			
		case 3:
			printf("\n You selected Reservation (Rs.5 per Km)");
			fareamt = distance*5;
			break;
			
		case 4:
			printf("\n You selected Local Vehicle (Rs.2 per Km)");
			fareamt = distance*2;
			break;
			
		default:
			printf("\n Invalid Choice...");
	}
	
	printf("\n Generating Ticket ...");
	Sleep(4000);
	
	system("cls");
	
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~ Ticket ~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n Departure City : %s", city1);
	printf("\n Arrival City : %s", city2);
	printf("\n Total Distance : %d Km", distance);
	printf("\n Fare Amount : Rs.%d", fareamt);
	printf("\n --------------------- Happy Journey --------------------");
	
	getch();
}


