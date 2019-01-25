#include<stdio.h>
#include<conio.h>
void happy();
// void harshit();
int main(int argc, char const *argv[])
{
    int gr;
    printf("If you want to use my function enter 1 (warning:you'll see and notice crazy stuff that'll make your terminal blast) : ");
    scanf("%d",&gr);
    if(gr==1)
        happy();
    else
        printf("Bhaad me jao ");
    getch();
    return 0;
}
void happy()
    {
        printf("\nIn Program we shall do operations on your entered three digit number");
        int num;
        printf("\nenter 3-digit number :");
        scanf("%d",&num);
        int r1,r2,r3,q1,q2,q3,sum;
        q1=num/100, r1=num%100;
        q2=r1/10, r2=r1%10;
        q3=r2/1, r3=r2%1;
        sum=q1+q2+q3;
        printf("\nThe Sum Of Numbers of digit %d is %d",num,sum);
        int reve = q3*100 + q2*10 + q1;
        printf("\nAnd the reverse of your number is %d",reve);
        // float root = pow(num , 0.5);
        // printf("\nsquareroot of your number is %f",root);
        int squa = num*num;
        printf("\nSquare of your number is %d",squa);
    }
