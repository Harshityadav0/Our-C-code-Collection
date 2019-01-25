#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    printf("\n\nSo We've to Find The Area Of Triangle ABC While It's All 3 Sides Are Given");
    int ab,bc,ca;
    float s,ar; 
    printf("\n\nEnter All 3 Sides Serialwise(AB then BC then CA) : ");
    scanf("%d %d %d",&ab,&bc,&ca);
    s = (ab+bc+ca)/2;
    ar = pow(s*(s-ab)*(s-bc)*(s-ca),0.5);
    printf("Area Of Triangle ABC is : %f", ar);
    getch();
    return 0;
}
