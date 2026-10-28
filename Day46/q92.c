
#include <stdio.h>

int main() {
    char str[1000];
    int found = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (int j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j] &&
                str[i] >= 'a' && str[i] <= 'z') {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("-1\n");

    return 0;
}
