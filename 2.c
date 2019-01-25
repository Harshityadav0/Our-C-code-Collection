#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    printf("Distance Converter");
    float km, mile, feet, yard, inch;
    printf("\n \nEnter The Distance In Kilometers : ");
    scanf("%f", &km);
    mile = km*6.21371e-1;
    feet = km*3281;
    yard = km*1094;
    inch = km*3281*12;
    printf("Is Equal To : %f Miles" , mile);
    printf("\n Is Equal To : %f Feet" , feet);
    printf("\n Is Equal To : %f Yards", yard);
    printf("\n Is Equal To : %f Inches", inch);
    getch();
    return 0;
}
