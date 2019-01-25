#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    // A Program to Calculate Pay Day Salary
    float Salary;
    float gross;
    printf("Enter Your Salary:");
    scanf("%f", &Salary);
    gross = Salary*0.40;
    // printf("Total Salary :  " , Salary);
    // printf("\n Bank Loan : 40%");
    // printf("\n Home Mortgage : 20%");
    printf(" \n Gross Salary : %f" , gross);
    getch();
    return 0;
}
