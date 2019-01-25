#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float cost, sell, prof,loss,perp,perl;
    printf("Enter The Cost : $");
    scanf("%f",&cost);
    printf("\nEnter The Sewlling price: $");
    scanf("%f",&sell);
    prof = sell - cost;
    loss = cost - sell;
    perp = 100*prof/cost;
    perl = 100*loss/cost;
    if(prof>0)
        printf("\nyup! you've earned profit of $%f (%f percent profit)",prof, perp);
    else if(prof<0)
        printf("\nyou're in loss of $%f (%f percent loss)",loss, perl);
        else 
            printf("\nSorry You've made no profit");
    return 0;
}
