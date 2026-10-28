
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[500];
    int newWord = 1;

    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i])) {
            newWord = 1;
        } else {
            if (newWord)
                printf("%c.", toupper((unsigned char)name[i]));
            newWord = 0;
        }
    }

    printf("\n");
    return 0;
}
