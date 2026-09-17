/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 17 September 2026
Question No: Q24

Question:
Write a program to calculate an electricity bill using
the following rates:
First 100 units = Rs.5/unit
Next 100 units = Rs.7/unit
Next 100 units = Rs.10/unit
Above 300 units = Rs.12/unit.
*/

#include <stdio.h>

int main()
{
    int units, bill;

    scanf("%d", &units);

    if(units <= 100)
    {
        bill = units * 5;
    }
    else if(units <= 200)
    {
        bill = 100 * 5 + (units - 100) * 7;
    }
    else if(units <= 300)
    {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    }
    else
    {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill = Rs.%d", bill);

    return 0;
}
