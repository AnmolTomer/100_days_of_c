#include <stdio.h>
#include <conio.h>

void fun1();
void fun2();
void fun3();
int b;
main()
{
	system("cls");
	b = 10 ;
	fun1();
	fun2();
	fun3();
	b += 10;
	printf("Inside main b = %d",b);
	getch();
}
void fun1()
{
	b += 10;
	printf("Inside Fun1 b = %d\n",b);
}
void fun2()
{
	int b;
	b = 1000;
	printf("Inside Fun2 b = %d\n",b);
}

void fun3()
{
	b += 100;
	printf("Inside Fun3 b = %d\n",b);
}
