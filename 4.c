#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
   printf("Farenheit To Celcius Converter \n ");
   float f;
   float cel;
//    int a = pow(2,3);
   printf("Enter Temperature In Farenheit : ");
   scanf("%f", &f);
   cel = 5*f/9-160/9;
   printf("%f Celcius", cel);
//    printf("%d" , a);
// int a, b;
   getch();
    return 0;
}
