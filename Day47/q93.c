
#include <stdio.h>
#include <ctype.h>

int main() {
    char a[1000], b[1000];
    int freq[256] = {0};

    scanf(" %999[^\n]", a);
    scanf(" %999[^\n]", b);

    for (int i = 0; a[i] != '\0'; i++) {
        unsigned char c = (unsigned char)a[i];
        if (!isspace(c))
            freq[tolower(c)]++;
    }

    for (int i = 0; b[i] != '\0'; i++) {
        unsigned char c = (unsigned char)b[i];
        if (!isspace(c))
            freq[tolower(c)]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
