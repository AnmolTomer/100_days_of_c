#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	
	t = 1000; // Declaring value of t inside main()
	fun2(); // defining a function within main()
	printf("\n%d",t);
	getch();
	
}

void fun1() // declaring a function named fun1 with void return type
{
	int t;
	t = 10;
	printf("\n%d",t);
	
}

void fun2() // declaring a function named fun1 with void return type
{
	int t;
	t = 100;
	printf("\n%d",t);
	
}
