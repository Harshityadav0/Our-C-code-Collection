#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    printf("\n\nProgram To Reverse A 5-Digit Number");
    int num;
    printf("\n\nEnter That 5-digit number : ");
    scanf("%d",&num);
    int q1=num/10, r1=num%10;
    int q2=q1/10, r2=q1%10;
    int q3=q2/10, r3=q2%10;
    int q4=q3/10, r4=q3%10;
    int q5=q4/10, r5=q4%10;
    int reve = 10000*r1 + 1000*r2 + 100*r3 + 10*r4 + r5;
    printf("The Reverse Of %d Is : %d", num, reve);
    getch();
    return 0;
}
