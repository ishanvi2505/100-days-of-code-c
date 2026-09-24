#include <stdio.h>

int main()
{
    int n, digit, result = 0, place = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
            result = result + place;

        n = n / 10;
        place = place * 10;
    }

    printf("%d", result);

    return 0;
}
