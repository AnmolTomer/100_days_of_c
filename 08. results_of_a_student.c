#include <stdio.h>

main()
{
    int m1,m2,m3,m4,m5,m6,total;
    char result, grade, name[20];
    float avg;
    printf("Enter the name of the student : ");
    scanf("%s",name);
    printf("\nEnter marks in 6 subjects : ");
    scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
    total = m1+m2+m3+m4+m5+m6;
    avg = total/6;
    if (avg>40){
        result = 'p';
        if (avg>=91 && avg <= 100)
            grade = 'S';
        else if (avg>=81 && avg <= 90)
            grade = 'A';
        else if (avg>=71 && avg <= 80)
            grade = 'B';
        else if (avg >= 61 && avg <= 70)
            grade = 'C';
        else if (avg >= 51 && avg <= 60)
            grade = 'D';
        else
            grade = 'E';
    }
    else
        result = 'f';
    printf("\nStudent name  :   %s",name);
    printf("\nMarks         :   ");
    printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",m1,m2,m3,m4,m5,m6);
    printf("\nAverage marks : %f",avg);
    if(result == 'p')
        printf("\nResult        : Pass");
    else
        printf("\nResult        : Fail");
        printf("\nGrade        : %c",grade);
}