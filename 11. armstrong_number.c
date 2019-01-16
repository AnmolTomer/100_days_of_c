// Any number is said to be an armstrong number if the sum of cube of every digit in the number is equal to the number itself.

#include<stdio.h>

main(){
    int num,temp,sum,rem;
    printf("Enter any number : ");
    scanf("%d", &num);
    temp = num; //Temporary number being used for checking if number is a armstrong number after further processing.
    sum = 0;
    while (temp>0){
        rem = temp%10; //Remainder or mod operator to get the last digit and add its cube in the next step to sum.
        sum += (rem*rem*rem);
        temp /= 10; // To remove the last digit from right of the number we divide using "/".
    }
    if (num==sum)
    printf("%d is an Armstrong Number.",sum);
    else
    printf("%d is not an Armstrong Number.",num);
}
