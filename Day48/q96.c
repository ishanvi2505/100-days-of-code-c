
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0') {
            for (int j = i - 1; j >= start; j--)
                putchar(str[j]);

            if (str[i] == ' ')
                putchar(' ');

            start = i + 1;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    putchar('\n');
    return 0;
}
