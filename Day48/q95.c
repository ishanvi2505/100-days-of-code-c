
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], doubled[2000];

    scanf("%999s %999s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(doubled, a);
    strcat(doubled, a);

    if (strstr(doubled, b) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
