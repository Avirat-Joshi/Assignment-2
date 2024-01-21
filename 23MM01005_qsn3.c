#include <stdio.h>
int main()
{
    printf("Enter total number of days: ");
    int days;
    scanf("%d", &days);
    int years = days / 365;
    int remaining_days = days - (years * 365);
    int months = (remaining_days) / 30;
    remaining_days = remaining_days - (months * 30);
    int weeks = remaining_days / 7;
    if (months == 12)
    {
        years++;
        months=0;
    }
    remaining_days = remaining_days - (weeks * 7);
    printf("Years: %d", years);
    printf("\nMonths: %d", months);
    printf("\nWeeks: %d", weeks);
    printf("\nDays: %d", remaining_days);
    return 0;
}