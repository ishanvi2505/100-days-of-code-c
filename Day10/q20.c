/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 16 September 2026
Question No: Q20

Question:
Write a program to display the day of the week for numbers
1 to 7 using switch-case.
*/

#include <stdio.h>

int main()
{
    int day;

    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}
