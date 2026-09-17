/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 15 September 2026
Question No: Q19

Question:
Write a program to input three sides of a triangle and
classify it as Equilateral, Isosceles, or Scalene.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
        printf("Equilateral");
    else if(a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}
