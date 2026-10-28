#include <stdio.h>

int main() {
    char s[500];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }

    printf("%s", s);

    return 0;
}
