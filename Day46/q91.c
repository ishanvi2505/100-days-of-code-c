
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = (char)tolower((unsigned char)str[i]);

        if (c != 'a' && c != 'e' && c != 'i' &&
            c != 'o' && c != 'u') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
    printf("%s", str);
    return 0;
}
