#include <stdio.h>

int main() {
    char s[500], a, b;
    int i = 0, j, palindrome = 1;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    j = i - 1;
    i = 0;

    while (i < j) {
        a = s[i];
        b = s[j];

        if (a >= 'A' && a <= 'Z')
            a += 32;
        if (b >= 'A' && b <= 'Z')
            b += 32;

        if (a != b) {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
