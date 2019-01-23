#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int str_len,p,q,s;
	char ch[300]; // Declare character array
	system("cls");
	printf("Enter any string : ");
	scanf("%s",ch);
	str_len = strlen(ch); // Get the length of the string entered.
	for(p=0;p<str_len;p++)
	{
		for(q=0;q<str_len-p;q++) // for printing the character with 2 whitespace from left to right.
		printf("%c  ",ch[q]);
			for(q=0;q<(p*2);q++) // Running the loop p*2 times so that first we print left side pattern and then right side pattern.
				printf("  ");
			s = str_len-p-1;
			for(q=s;q>=0;q--) // Printing from last element to first element i.e. ABCD then DCBA left to right.
			printf("%c  ",ch[q]);
			printf("\n");
	}
}
