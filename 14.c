#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    /* code */
    printf("You'll Give Me An Amount Of Money And I'll Tell The Minimum Amount Of Notes From Which That Amount Can Be Formed While Available Notes Are Of : 1 , 2, 5, 10, 50, And 100");
    int amo;
    int q1,q2,q3,q4,q5,q6;
    int r1,r2,r3,r4,r5,r6;
    printf("\nEnter The Amount of money : ");
    scanf("%d",&amo);
    q1 = amo/100, r1 = amo%100;
    q2 = r1/50, r2 = r1%50;
    q3 = r2/10, r3 = r2%10;
    q4 = r3/5, r4 = r3%5;
    q5 = r4/2, r5 = r4%2;
    q6 = r5/1, r6 = r5%1;
    printf("\n100 notes : %d",q1);
    printf("\n50 notes : %d",q2);
    printf("\n10 notes : %d",q3);
    printf("\n5 notes : %d",q4);
    printf("\n2 notes : %d",q5);
    printf("\n1 notes : %d",q6);
    return 0;
}
