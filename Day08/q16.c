/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 12 September 2026
Question No: Q16

Question:
Write a program to input three numbers and find the
largest number using if-else.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Largest is %d", a);
    else if(b >= a && b >= c)
        printf("Largest is %d", b);
    else
        printf("Largest is %d", c);

    return 0;
}
