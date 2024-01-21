#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("\nLeap year");
    else if(year%100==0)
        printf("\nNot leap year");
    else if(year%4==0)
        printf("\nleap year");            
    else    
        printf("\nNot leap year");    
    return 0;        
}