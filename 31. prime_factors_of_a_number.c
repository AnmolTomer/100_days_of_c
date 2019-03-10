/*
Checking whether the factors of a number are prime or not. Input one number, check from 1 to that number. If i is a factor of that
number then program checks if factor i is a prime number or not. If it is prime then we print it else not printed.
*/

#include <stdio.h>

main()
{
    int n;
    printf("Enter the number to be checked : ");
    scanf("%d",&n); // Take the number from user
    int i = 1;
    while(i<=n) // Loop till i (factor to be) is less than or equal to number n given by user.
    {
        if(n%i==0)
        {
            int j = i;
            int count = 0; // Counter to keep a track of number of factors are there of a given factor of n.
            int l = 1;
            while(l<=j)
            {
                if(j%l==0)//checking number of factors of the factor of number n in order to determine prime or not.
                count++; // Increase the count if it is getting divided by l.
                l++;
        	}

            if(count==2)//If number divisible by only 1 and itself
            {
                printf("\n%d is a prime factor of prime %d.",l-1,n); // l-1 because we do l++ and value gets increased by 1 of prime number.
            }
        }
    i++;

	}


    }
