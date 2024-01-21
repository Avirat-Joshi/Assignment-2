#include<stdio.h>
int main()
{
    int a , b , c;
    printf("\nEnter three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int  max = ((a>b)&&(a>c))?a:((b>c)?b:c);
    printf("\nMaximum is %d",max);
    return 0;
}