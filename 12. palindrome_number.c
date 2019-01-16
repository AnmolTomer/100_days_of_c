//  A number is said to be a palindrome number if it is same if read from right hand side or left hand side. e.g. 121, 343 etc.

#include <stdio.h>
main(){
    int num,temp,sum,rem;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp = num;
    sum = 0;
    while(temp>0){
        rem = temp%10; // Taking the right-most digit
        sum = (sum*10)+rem; // Sum equals to the 10 times of already the value of sum + right most number we got from above line.
        temp /= 10;  // To remove the last digit from right of the number we divide using "/".
    }
    if (num==sum)
    printf("%d is a Palindrome Number.",sum);
    else
    printf("%d is not a Palindrome Number.",num);
}