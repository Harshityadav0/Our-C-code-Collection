#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    printf("\n\n\n                                    Operator Examples\n\n\n");
    // GALAT TARIKA :
    // int a,b,c,d,e,X;
    // printf("Enter A 5 Digit Number : ");
    // scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    // X = a*10000 + b*1000 + c*100 + d*10 + e;
    // printf("%d",X);
    int x;
    printf("Enter A 5-Digit Number And My Program Will Add It's Digits : ");
    scanf("%d",&x);
    int q1 = x/10, r1 = x%10;
    int q2 = q1/10, r2 = q1%10;
    int q3 = q2/10, r3 = q2%10;
    int q4 = q3/10, r4 = q3%10;
    int q5 = q4/10, r5 = q4%10;
    int sum = r1+r2+r3+r4+r5;
    printf("Sum Of Digits Of %d Is : %d",x,sum);
    getch();
    return 0;
}
