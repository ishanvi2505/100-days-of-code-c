
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower((unsigned char)str[i]))
            str[i] = toupper((unsigned char)str[i]);
        else if (isupper((unsigned char)str[i]))
            str[i] = tolower((unsigned char)str[i]);
    }

    printf("%s", str);
    return 0;
}
