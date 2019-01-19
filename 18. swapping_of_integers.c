// Swapping of two integers without using the third variable.

#include <stdio.h>
#include <conio.h>
int main()
{
int a,b;
system("cls");
printf("Enter the values of a and b : "); 
scanf("%d%d",&a,&b);
printf("\n\nBefore Swapping \n\n");
printf("Value of a : %d\t",a);
printf("Value of b : %d",b);
a = a+b;
b = a-b;
a = a-b;
printf("\n\nAfter Swapping \n\n");
printf("Value of a : %d\t",a);
printf("Value of b : %d",b);
return 0;
}
