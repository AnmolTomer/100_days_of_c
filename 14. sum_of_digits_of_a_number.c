#include <stdio.h>

main()
{
	int rem,sum;
	long num;
	printf("Enter any number : ");
	scanf("%ld",&num);
	sum = 0;
	while(num>0)
	{
		rem = num%10;
		sum += rem;
		num /= 10;
		
	}
printf("The sum of the digits is %d .",sum);
}
