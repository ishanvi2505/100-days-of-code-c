#include <stdio.h>

int main() {
    int n, a[100], key, i, pos = -1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not found\n");

    return 0;
}
