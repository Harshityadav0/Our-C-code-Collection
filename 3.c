#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    printf("A Program To Calculate Average Of Marks");
    int a, b, c, d, e;
    float av;
    printf("\n Enter Obtained Marks In All 5 Subjects : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    av = a/5+b/5+c/5+d/5+e/5;
    printf("Average Marks or Percentage Is : ");
    printf("%f" , av);
    getch();
    return 0;
}
