#include <stdio.h>
//  A number is said to be a perfect number if the sum of its factors is equal to the number.

main(){
    int n,i,sum;
    printf("Enter any number : ");
    scanf("%d",&n);
    i = 1;
    sum = 0; // Initializing sum to 0 to avoid assignment of any garbage value to the var sum.
    while(i<n){
        if (n%i==0)
        sum += i;
        i++;

    }
    if (sum==n)
        printf("%d is a Perfect number.",n);
    
    else
        printf("%d is not a perfect number.",n);
}
