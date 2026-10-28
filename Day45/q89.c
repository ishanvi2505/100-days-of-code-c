#include <stdio.h>

int main() {
    char s[500], ch;
    int i, count = 0;

    fgets(s, sizeof(s), stdin);
    scanf(" %c", &ch);

    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
