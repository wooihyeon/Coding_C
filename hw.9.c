#include <stdio.h>
#include <string.h>

int convCase(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) {
    char str[100];
    printf("Input> ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = convCase(str[i]);
    }

    printf("Output>  %s\n", str);
    return 0;
}
