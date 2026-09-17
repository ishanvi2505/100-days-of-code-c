/*
Name: Ishanvi Pahil
Student ID: 590041238
Question No.: Q4

Question:
Write a program to calculate Simple Interest and Compound Interest.
*/

#include <stdio.h>

int main()
{
    float p, r, t;
    float si, ci, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;

    for(int i = 1; i <= t; i++)
    {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f", ci);

    return 0;
}
