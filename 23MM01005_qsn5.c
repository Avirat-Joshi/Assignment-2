#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a&1) 
        printf("\nodd");
    else    
        printf("\nEven");       
    return 0;
}