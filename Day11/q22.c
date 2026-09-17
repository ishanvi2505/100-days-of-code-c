/*
Name: Ishanvi Pahil
SAP ID: 590041238
Date: 16 September 2026
Question No: Q22

Question:
Write a program to calculate profit or loss percentage
given the cost price and selling price.
*/

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, percentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if(sellingPrice > costPrice)
    {
        percentage = (sellingPrice - costPrice) * 100 / costPrice;
        printf("Profit %.2f%%", percentage);
    }
    else if(costPrice > sellingPrice)
    {
        percentage = (costPrice - sellingPrice) * 100 / costPrice;
        printf("Loss %.2f%%", percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
