#include <stdio.h>
#include <string.h>

int main() {
    char s[21];   
    int x = 0, y = 0;
    int i, len;

    if (scanf("%20s", s) != 1) {
        return 0;
    }

    len = strlen(s);


    for (i = 0; i < len; i++) {
        if (s[i] == 'z') {
            x++;
        } else {
            break;
        }
    }
    for (; i < len; i++) {
        if (s[i] == 'o') {
            y++;
        } else {
            
            printf("No\n");
            return 0;
        }
    }

    if (2 * x == y && x > 0 && y > 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
