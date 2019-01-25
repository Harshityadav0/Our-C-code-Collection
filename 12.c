#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    printf("Print All trigonometric functions while angle is given in degrees");
    float deg, rad;
    printf("\nEnter the angle in degrees : ");
    scanf("%f",&deg);
    rad = 3.141592653589793*deg/180;
    printf("\nSine value : %f",sin(rad));
    printf("\nCosine value : %f",cos(rad));
    printf("\nTangent value : %f",tan(rad));
    printf("\nsecant value : %f",1/(cos(rad)));
    printf("\nCotangent value : %f",1/(tan(rad)));
    printf("\nCosecant value : %f",1/(sin(rad)));
    return 0;
}
