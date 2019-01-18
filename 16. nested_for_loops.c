// Program using nested for loops to print alternate 0's and 1's in a ladder/ staircase form.
#include <stdio.h>


int main()
{
	int i,j,r,t;
	
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	t = 1;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)	
		{
			if(t%2==0)
				printf("0");
			else
				printf("1");
			t++;
				
		}
		printf("\n"); // New line after all the required 0's and 1's in a row are written.
	}
	
}
