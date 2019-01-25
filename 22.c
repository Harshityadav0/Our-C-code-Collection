#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    /* code */
    printf("Coparing ages of three boys\n");
    char _1,_2,_3;
    int a1,a2,a3;
    printf("Enter 1st Boy's name and age : \n");
    scanf("%c%d", &_1, &a1);
    printf("\nEnter 2nd Boy's name and age : \n");
    scanf("%c%d", &_2, &a2);
    printf("\nEnter 3rd Boy's name and age : \n");
    scanf("%c%d", &_3, &a3);
    if((a1>a2)&&(a1>a3))
    printf("\n %c is biggest with %d age",_1,a1);
        else if((a2>a1)&&(a2>a3))
                printf("\n %c is biggest with %d age",_2,a2);
                else
                    printf("\n %c is biggest with %d age",_3,a3);
    return 0;
}
