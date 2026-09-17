/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 13 September 2026
Question No: Q17

Question:
Write a program to find the roots of a quadratic equation
and categorize them as real and different, real and same,
or complex roots.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different: %.2f %.2f", root1, root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %.2f", root1);
    }
    else
    {
        printf("Roots are complex");
    }

    return 0;
}
