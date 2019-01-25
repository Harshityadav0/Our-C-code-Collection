#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    printf("I Can Now Calculate The Distance Between Any Two Places On Earth\n");
    float l1,l2,g1,g2,dist;
    printf("First Enter Latitude And Longitude Of Place1 : ");
    scanf("%f %f",&l1,&g1);
    printf("Now Enter Latitude And Longitude Of Place2 : ");
    scanf("%f %f",&l2,&g2);
    dist = 7339.476*acos(sin(l1*3.141592653589793/180)*sin(l2*3.141592653589793/180) + cos(l1*3.141592653589793/180)*cos(l2*3.141592653589793/180)*cos(g2*3.141592653589793/180-g1*3.141592653589793/180));
    printf("The Distance Between Place1 And Place2 Is : %f km",dist);
    getch();
    return 0;
}
