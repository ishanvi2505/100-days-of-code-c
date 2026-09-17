/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 14 September 2026
Question No: Q18

Question:
Write a program to input percentage and display the grade
according to the following:
90-100 = A
80-89 = B
70-79 = C
60-69 = D
Below 60 = F
*/

#include <stdio.h>

int main()
{
    int percentage;

    scanf("%d", &percentage);

    if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 70)
        printf("Grade C");
    else if(percentage >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
