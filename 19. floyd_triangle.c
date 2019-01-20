#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,t,rows;
	system("cls");
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	t = 1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			
			printf("%d ",t);
			t++;
		}
		printf("\n");
	}
}
