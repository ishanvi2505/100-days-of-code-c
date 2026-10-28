
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    scanf("%499s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                putchar(str[k]);

            putchar('\n');
        }
    }

    return 0;
}
