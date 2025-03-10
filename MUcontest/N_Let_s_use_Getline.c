#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = NULL;
    size_t len = 0;

    getline(&s, &len, stdin);

    char *pos = strchr(s, '\\');
    if (pos != NULL) {
        *pos = '\0';
    }

    printf("%s", s);

    free(s);
    return 0;
}
