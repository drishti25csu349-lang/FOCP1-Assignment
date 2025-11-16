#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            // lowercase → uppercase
            s[i] = s[i] - 'a' + 'A';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            // uppercase → lowercase
            s[i] = s[i] - 'A' + 'a';
        }
    }

    printf("%s\n", s);
    return 0;
}
