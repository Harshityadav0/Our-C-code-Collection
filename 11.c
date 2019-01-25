#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    printf("Wind Chill Factor is the temperature felt on skin due to the wind . It is always lower than the real air temperature.\n Here is a program to calculate Wind Chill Factor(WCF) : ");
    float air,wcf,v;
    printf("\nEnter Air Temperature : ");
    scanf("%f",&air);
    printf("\nEnter wind speed : ");
    scanf("%f",&v);
    wcf = 35.74 + 0.6215*air + (0.4275*air -35.75)*pow(v,0.16);
    printf("\n The Wind Chill Factor is : %f",wcf);
    getch();
    return 0;
}
