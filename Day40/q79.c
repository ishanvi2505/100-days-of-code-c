#include <stdio.h>

int main() {
    int a[20][20], r, c, i, j, k;
    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (k = 0; k < c; k++) {
        i = 0;
        j = k;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for (k = 1; k < r; k++) {
        i = k;
        j = c - 1;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
