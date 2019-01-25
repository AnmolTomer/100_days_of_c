#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int c;
	system("cls");
	for(c=1;c<=3;c++)
	stat();
	getch();
}
stat()
{
	static int sv = 0;
	sv += 1;
	printf("%d\n",sv);
}
