#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float pi = asin(0);
    float res = sin(pi);
    printf("The Value Of Sin Pi Radeon is : %f",res);
    float x,y;
    printf("\nFinding Polar Co-Ordinates");
    printf("\nEnter Co-Ordinates Of The Point : ");
    scanf("%f %f",&x,&y);
    float polar_x,polar_y;
    polar_x = pow((x*x+y*y),0.5);
    polar_y = atan(y/x);
    printf("\nThe Polar Co-Ordinates Are : %f %f",polar_x,polar_y);
    getch();
    return 0;
}
