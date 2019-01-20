#include <stdio.h>
#include <conio.h>
main()
{
	int i,a,b,c,r;
	system("cls");
	printf("Enter range : ");
	scanf("%d",&r);
	a = 0; b = 1;
	if(r>=2)
	{
	printf("%d\n%d\n",a,b);
	c = 0;
	while(c<=r)
	{
		c = a+b;
		if(c<=r)
		{
			printf("%d\n",c);
			a=b;
			b=c;
		}
	}
	}
	else if(r>0 && r<=2)
	{
		printf("%d\n%d\n",a,b);
	}
	else("NaN. Can't print fibonacci sequence.");
}
