#include <stdio.h>

int main() {
    char s[500], ch;
    int i = 0, vowels = 0, consonants = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
