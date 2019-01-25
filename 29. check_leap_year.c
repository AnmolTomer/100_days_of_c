// Program to check Leap Year and to Print Leap Years from 1901 to 2100

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int year, i,j;
	system("cls");
	printf("Enter year : ");
	scanf("%d",&year);
	if(year%4 == 0)
		printf("%d is a leap year.\n",year);
	else
		printf("\n\nLeap Years from 1901 to 2100 : \n\n");
		for(i=0;i<8;i++)
		{
			for(j = 1900;j<2100;j++)
			{

					if(j%4==0)
					printf("%d \t",j);
				
			}
		}
}
