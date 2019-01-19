// Asterisks Graph
#include <stdio.h>
#include <conio.h>

main()
{
  int i,j,rows;
  system("cls");
  printf("Enter the number of rows : ");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("* ") ;
    }
    printf("\n") ;

  }
}
