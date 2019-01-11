#include <stdio.h>

int main(){
    int a,l,b;
    float pi = 3.14;

    printf("Enter the side of a square : ");
    scanf("%d",&a);
    printf("\n The area of square : %d",a*a);
    printf("\n The perimeter of square : %d",4*a);
    printf("\nEnter length and breadth: ");
    scanf("%d%d",&l,&b);
    printf("\n\nArea of rectangle: %d",l*b);
    printf("\nPerimeter of a rectangle: %d",2*(l+b));
    return 0;
}