#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    printf("digit reverse\n");
    int n,reverse=0;
    printf("enter num to reverse\n");
    scanf("%d,&n");
    while (n!=0)
    {
        reverse = reverse*10;
        reverse = reverse + n%10;
        n = n/10;
    }
    printf("\n%d",reverse);
    return 0;
}