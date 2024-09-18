#include <stdio.h>

int main(void) {
    char *programming_langs[] = {"csharp", "python", "c", "c++", "php"};

    FILE *file;
    file = fopen("programming_langs", "w");
    for (size_t i = 0; i < sizeof(programming_langs) / sizeof(programming_langs[0]); i++) {
        fprintf(file, "%s\n", programming_langs[i]);
    }

    fclose(file);
    return 0;
}
