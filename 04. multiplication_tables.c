#include <stdio.h>
main()
{
    int a,b;
    a=1;
    do{ // outer loop to print the table of say 1
        b=1;
        do{ // inner loop to print multiples till 10 of the number in outer loop.
            printf("%d x %d = %d",a,b,a*b);
            printf("\n");
            b++;

        }
        while (b<=10);
        a++;
        printf("\n\n"); // to leave a gap of 2 lines between multiplication tables of 2 different numbers.

    }while(a<=10);
}