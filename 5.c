#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x=1, y=2;
    float z;
    z = (x+3)*x*x*x/((y-4)*(y+5));
    printf("%f", z);
    // iska matlab hai ki parenthesis ki nesting sambhav hai
    // isko ek aur tarike se kiya ja sakta hai: operators ko statement ke according change karke:
    z = (x+3)*x*x*x/(y-4)/(y+5);
    printf("\n%f", z);
    ////////////////////////////////////////////////////////////////////////
    // One More Example
    float v=1, c=1, d=1, g=1;
    float r;
    r = (2*v+6.22*(c+d))/(g+v);
    printf("\n\n %f", r);
    // otherwise: 
    r = 2*v/(g+v)+6.22*(c+d)/(g+v);
    printf("\n%f", r);
    ////////////////////////////////////////////////////////////////////////
    float a1=1, b1=1, x1=1, y1=1, c1=1;
    float z1;
    z1 = (7.7*b1*(x1*y1+a1)/c1-0.8+2*b1)/((x1+a1)*(1/y1));
    printf("\n\n%f", z1);
    // otherwise
    z1 = (7.7*b1*(x1*y1 + a1)/c-0.8+2*b1)/(x1+a1)/(1/y1);
    printf("\n%f",z1);
    ///////////////////////////////////////////////////////////////////////
    float x2=2, X;
    X = 12*pow(x2,3.0)/4/x2 + 8*pow(x2,2.0)/4/x2 + x2/8/x2 + 8/8/x2;
    printf("\n\n%f",X);
    // otherwise
    X = 3*pow(x2,2.0) + 2*x2 + 1.0/8 + 1/x2;
    printf("\n%f",X);
    //////////////////////////////////////////////////////////////////////
    printf("\n\nFinished Exercise");
    printf("\n\nVariable Name, Wrong Typing Aur Operators Ka Sahi Use karne ki zaroorat hai\n");
    getch();
    return 0;
}
