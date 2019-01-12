#include <stdio.h>
main(){
    int r,i;

    printf("Enter the range : ");
    scanf("%d",&r);
    i = 1;
    while(i<=r){ // Until iterator i is equal to given number keep looping.
        if (i%2==0)
        printf("%d\t",i); // Print Even numbers with a separation of 1 tab character.
        i++;
    }
}