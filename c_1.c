#include<stdio.h>
#include<conio.h>
void main()
{
    float DA,HRA,MA,TA,PF;
    float BS,GS,NS,IT=500;

    printf("Enter your basic salary:");
    scanf("%f",&BS);
    DA=0.7*BS;
    printf("\n DA of salary:  %f",DA);
    HRA=0.07*BS;
    printf("\n HRA of salary:  %f",HRA);
    MA=0.02*BS;
    printf("\n MA of salary:  %f",MA);
    TA=0.04*BS;
    printf("\n TA of salary:  %f",TA);
    PF=0.12*BS;
    printf("\n PF of salary:  %f",PF);
    GS=BS+DA+HRA+MA+TA;
    printf("\n GS:  %f",GS);
    NS=GS-(PF+IT);
    printf("\n NS: %f",NS);

    printf("\n23IT077 Dig.");

    getch();
}