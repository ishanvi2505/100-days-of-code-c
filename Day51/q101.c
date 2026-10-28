
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int first = -1, last = -1;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (low < n && nums[low] == target) {
        first = low;
        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        last = high;
    }

    printf("%d,%d\n", first, last);
    return 0;
}
