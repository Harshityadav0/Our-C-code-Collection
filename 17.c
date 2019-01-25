#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("year entaro\n");
    scanf("%d",&year);
    int ygy = year%4;
    if(ygy==0)
        printf("%d leap year hai",year);
    else
        printf("%d leap year nhi hai",year);
    getch();
    return 0;
}