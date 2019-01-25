#include<stdio.h>
#include<conio.h>
void bmi();
int main(int argc, char const *argv[])
{
    do
    {
        char ask;
        int n=1;
        printf("Building A Function For Categorizing BMI of A Person\n\n");
        printf("Do you want to use this function? \n If yes then enter Y or y \n");
        scanf("%c",&ask);
        if((ask=='y')||(ask=='Y'))
            bmi();
        else
            {
                printf("Thanks For Using.Have A Great Day.\n");
            }
        return 0;
    }
    while(n=)
}
void bmi()
{
    float wgh,hgh,bmi;
    printf("\nEnter the height in meters : \n");
    scanf("%f",&hgh);
    printf("\nEnter the weight in kilograms : \n");
    scanf("%f",&wgh);
    bmi=wgh/(hgh*hgh);
    if(bmi<=15)
        printf("\nBMI = %f Category = Starvation",bmi);
    if((bmi>15)&&(bmi<=17.5))
        printf("\nBMI = %f Category = Anorexic",bmi);
    if((bmi>17.5)&&(bmi<=18.5))
        printf("\nBMI = %f Category = Underweight",bmi);
    if((bmi>18.5)&&(bmi<=24.9))
         printf("\nBMI = %f Category = Ideal",bmi);
    if((bmi>24.9)&&(bmi<=25.9))
         printf("\nBMI = %f Category = Overweight",bmi);
    if((bmi>25.9)&&(bmi<=30.9))
        printf("\nBMI = %f Category = Obese",bmi);
    if(bmi>30.9)
         printf("\nBMI = %f Category = Morbidly Obese",bmi);
}
