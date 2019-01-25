#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    /* code */
    int num;
    printf("Enter A Number : ");
    scanf("%d", &num);
    int mod = num%2;
    if( mod==0 )
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);
    return 0;
}
