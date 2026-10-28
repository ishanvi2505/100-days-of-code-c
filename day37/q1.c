#include <stdio.h>

int main() {
    int a[20][20], sum[20] = {0};
    int r, c, i, j;

    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for (i = 0; i < r; i++)
        printf("%d ", sum[i]);

    return 0;
}
