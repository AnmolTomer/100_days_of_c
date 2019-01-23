#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int n, f,i;
	system("cls")	;
	printf("Enter any number whose factorial you want to calculate : ");
	scanf("%d",&n);
	f = 1;
	for(i=1;i<=n;i++)
	{
		f *= i;
	}
	printf("Factorial of %d : %d",n,f);
}
