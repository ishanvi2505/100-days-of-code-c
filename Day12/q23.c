/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 17 September 2026
Question No: Q23

Question:
Write a program to calculate library fine:
First 5 days = Rs.2/day
Next 5 days = Rs.4/day
Next 20 days = Rs.6/day
More than 30 days = Membership cancelled.
*/

#include <stdio.h>

int main()
{
    int days, fine;

    scanf("%d", &days);

    if(days <= 5)
    {
        fine = days * 2;
    }
    else if(days <= 10)
    {
        fine = 5 * 2 + (days - 5) * 4;
    }
    else if(days <= 30)
    {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }
    else
    {
        printf("Membership Cancelled");
        return 0;
    }

    printf("Fine = Rs.%d", fine);

    return 0;
}
