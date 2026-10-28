
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], word[1000], longest[1000];
    int i = 0, j = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (isalnum((unsigned char)str[i])) {
            word[j++] = str[i];
        } else {
            if (j > maxLen) {
                word[j] = '\0';
                strcpy(longest, word);
                maxLen = j;
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    if (maxLen > 0)
        printf("%s\n", longest);
    else
        printf("No words found\n");

    return 0;
}
