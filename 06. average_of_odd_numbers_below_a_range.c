#include <stdio.h>
int main(){
    int i,range,c,sum; // i iterator, c counter
    float avg;
    printf("Enter the range : ");
    scanf("%d",&range);
    i = 1;c= 0; sum = 0;
    printf("Odd numbers in the range 0 to %d are : \n",range);
    while (i<=range){
        if (i%2!=0){
            printf("%d\t",i);
            sum += i;
            c++;
        }
        i++;
    }
    avg = sum/c;
    printf("\nThe average of odd numbers below %d : %.2f",range,avg);
    return 0;
}