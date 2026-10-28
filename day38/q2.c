#include <stdio.h>

int main() {
    int a[20][20], n, i, j, symmetric = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("Symmetric\n");
    else
        printf("Not symmetric\n");

    return 0;
}
