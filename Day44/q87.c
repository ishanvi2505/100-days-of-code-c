#include <stdio.h>

int main() {
    char s[500];
    int i = 0, spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ' ')
            spaces++;
        else if (s[i] >= '0' && s[i] <= '9')
            digits++;
        else if (!((s[i] >= 'a' && s[i] <= 'z') ||
                   (s[i] >= 'A' && s[i] <= 'Z')))
            special++;

        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
