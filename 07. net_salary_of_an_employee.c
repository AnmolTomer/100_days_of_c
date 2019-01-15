#include <stdio.h>
main(){
    int basic, insure, gross,net;
    float da,hra,pf;
    printf("Enter Basic Salary : ");
    scanf("%d",&basic);
    da = basic* 0.20 ;// Dearness Allowance
    hra = basic * 0.15;
    gross = basic + da + hra;
    insure = 500; // Insurance
    pf = basic * 0.12; // Provident Fund
    net = gross - (insure+pf);
    printf("\nBasic Salary                : %d",basic);
    printf("\nDearness Allowance          : %.2f",da);
    printf("\nHRA                         : %.2f",hra);
    printf("\nInsurance                   : %d",insure);
    printf("\nProvident Fund              : %.2f",pf);
    printf("\nGross Salary                : %d",gross);
    printf("\nNet Salary                  : %d",net);
}