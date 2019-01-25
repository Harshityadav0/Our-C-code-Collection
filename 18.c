#include<stdio.h>
#include<conio.h>
// #include<math.h>
void compare();
int main(int argc, char const *argv[])
{
    char yn[1];
    printf("do you want to do comparison ?(Y for yes & N for no):");
    scanf("%c",&yn);
    if(yn==)
        compare();
    else if(yn==)
        printf("\nThanks For Using This program");
    else
        printf("\nWho Said You To Enter A Value Besides 0 Or 1");
    getch();
    return 0;
}
void compare()
    {
        float a,b,c;
        printf("Enter three numberes");
        scanf("%f %f %f",&a,&b,&c);
        if((a>b)&&(a>c))
            printf("%f is greatest",a);
        else if((b>a)&&(b>c))
            printf("%f is greatest",b);
        else
            printf("%f is greatest",c);
        printf("\nHave A Good Day dude");
        getch();
    }
