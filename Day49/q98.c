
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[500];
    char *words[100];
    int count = 0;

    fgets(name, sizeof(name), stdin);

    char *token = strtok(name, " \t\n");

    while (token != NULL && count < 100) {
        words[count++] = token;
        token = strtok(NULL, " \t\n");
    }

    if (count == 0)
        return 0;

    for (int i = 0; i < count - 1; i++)
        printf("%c. ", toupper((unsigned char)words[i][0]));

    printf("%s\n", words[count - 1]);

    return 0;
}
