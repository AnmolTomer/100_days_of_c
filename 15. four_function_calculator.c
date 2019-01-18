#include <stdio.h>
#include <conio.h>

main(){
  int a,b,c;
  char x;
  printf("Enter two values : ");
  scanf("%d %d",&a,&b );
  printf("\n\n1. Add (A or a) \t 2. Subtract(S or s)\n\n3. Product (P or p) \t 4. Division (D or d)" );
  printf("\n\nEnter your choice" );
  scanf("%c",&x );
  switch (x) {
    case 'a':
    case 'A':
    if(a>b){
      c = a-b;
      printf("Difference of %d and %d : %d",a,b,c );
      break;
    }
    else
    {
      c = b-a;
      printf("Difference of %d and %d : %d",b,a,c );
    }
    break;
    case 'd':
    case 'D':
    if(a>b){
      c = a/b;
      printf("The quotient of %d and %d : %d",a,b,c );
    }
    else
    {
      c = b/a;
      printf("The quotient of %d and %d : %d",b,a,c );

    }
    break;
    case 'p':
    case 'P':
    printf("The Product of %d and %d : %d",a,b,a*b );
    break;
  }
}
