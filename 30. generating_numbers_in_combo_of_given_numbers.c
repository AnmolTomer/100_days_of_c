#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int t,r,range,i,j,s,d;
	int a[5],b[5];
	long n;
	system("cls");
	printf("Enter number of numbers for combination : \n");
	scanf("%d",&d);
	printf("Enter numbers for combination : ");
	for(i=0;i<d;i++) // Take the numbers and store in array a.
		scanf("%d",&a[i]);
	printf("\nEnter the range : ");
		scanf("%d",&range); // The range upto which you want the combination of numbers to print.
	for(i=1;i<=range;i++)
	{
		n = i; s=0; t=0;
		while(n>0)
		{
			j = 0;
			r = n%10;
			t++;
			while(j<d)
			{
				if(r==a[j])
				s++;
				j++;
			}
			n /= 10;
		}
		if(s==t)
		{
			printf("%d\t",i);
		}
	}
	getch();
}
