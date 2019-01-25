#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int five;
    printf("Enter 5 digit numera : ");
    scanf("%d",&five);
    int q1,q2,q3,q4,q5,r1,r2,r3,r4,r5,rev;
    q1=five/10000, r1=five%10000;
    q2=r1/1000, r2=r1%1000;
    q3=r2/100, r3=r2%100;
    q4=r3/10, r4=r3%10;
    q5=r4, r5=r4;
    rev=10000*q5+1000*q4+100*q3+10*q4+q1;
    printf("\nreverse is %d",rev);
    if(rev==five)
        printf("\nyes the number is palendrome");
    else
        printf("\nsorry bhai par ye palendromne nahi hai");
    getch();
    return 0;
}
