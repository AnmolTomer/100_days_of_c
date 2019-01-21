#include <stdio.h>
#include <conio.h>

main()
{
	int cno, pmr, cmr, cu; // customer number, previous month record, current month record, consumed units.
	float total;
	char sec;
	char cname[20];
	system("cls");
	printf("Enter the sector A, D or I		: ");
	scanf("%c",&sec);
	printf("Enter customer name				: ");
	scanf("%s",cname);
	printf("Enter customer number			: ");
	scanf("%d",&cno);
	printf("Enter the previous units		: ");
	scanf("%d",&pmr);
	printf("Enter the current units		    : ");
	scanf("%d",&cmr);
	cu = cmr - pmr;
	if(sec=='a' || sec == 'A')
	{
		if(cu > 300)
		total = cu*2.00;
		if(cu >200 && cu <=300)
		total = cu*1.50;
		if(cu >100 && cu <=200)
		total = cu*1.00;
		if(cu <= 100)
		total = cu*0.50;
	}
	
	if(sec=='i' || sec == 'I')
	{
		if(cu > 300)
		total = cu*4.00;
		if(cu >200 && cu <=300)
		total = cu*3.00;
		if(cu >100 && cu <=200)
		total = cu*2.00;
		if(cu <= 100)
		total = cu*1.00;
	}
	
	if(sec=='d' || sec == 'D')
	{
		if(cu > 300)
		total = cu*2.00;
		if(cu >200 && cu <=300)
		total = cu*1.50;
		if(cu >100 && cu <=200)
		total = cu*1.00;
		if(cu <= 100)
		total = cu*0.50;
	}
	
	printf("\n Customer Name 	: %s",cname);
	printf("\n Customer Number  : %d",cno);
	printf("\n Previous Units   : %d",pmr);
	printf("\n Current Units    : %d",cmr);
	printf("\n Sector           : %c",sec);
	printf("\n Consumed Units   : %d",cu);
	printf("\n Electric Bill    :  %f",total);
	
	
	
	
}
