#include <stdio.h>

main()
{
	int a,b,c=0,r;
	
	printf("Enter range : ");
	scanf("%d",&r);
	a = 1;
	while (a<=r)
	{
		b = 1;c=0;
		while(b<=a)
		{
			if (a%b==0)
			c += 1;
			b++;
		}
		if(c==2)
		printf("\n%d is a prime number.",a);
		a++;
		
	}
}
