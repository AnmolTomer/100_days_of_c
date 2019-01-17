#include <stdio.h>
#include <conio.h>

main()
{

	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
			printf("%c is a vowel.",ch);
			break;
		case 'E':
			printf("%c is a vowel.",ch);
			break;
		case 'I':
			printf("%c is a vowel.",ch);
			break;
		case 'O':
			printf("%c is a vowel.",ch);
			break;
		case 'U':
			printf("%c is a vowel.",ch);
			break;
		default:
			printf("%c is not a vowel.",ch);
		
	}
}
