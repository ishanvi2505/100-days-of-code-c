
#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;
    long long x = (long long)sqrt((double)total);

    if (x * x == total)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}
