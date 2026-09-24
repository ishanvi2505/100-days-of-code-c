#include <stdio.h>

int main()
{
    int a, b, x, y, r, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    gcd = x;

    lcm = (a * b) / gcd;

    printf("%d", lcm);

    return 0;
}
