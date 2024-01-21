#include<stdio.h>
int main()
{
    int a;
    printf("Input a number: ");
    scanf("%d",&a);
    int temp=(a>100 && a<200)?(a%3==0):0;
    if(temp==1)
        printf("\nTrue");
    else    
        printf("\nFalse");    
    return 0;
}