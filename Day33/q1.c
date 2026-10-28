#include <stdio.h>

int main() {
    int n, a[100], key, low = 0, high, mid, pos = -1, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == key) {
            pos = mid;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not found\n");

    return 0;
}
