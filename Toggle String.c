#include <stdio.h>
#include <ctype.h>
int main() {
    char str[101];
    scanf("%s",&str);
    for (int i = 0;i<101;i++){
if (str[i]>='a' && str[i]<='z' ){
    str[i] = toupper(str[i]);
}
else {
    str[i] = tolower(str[i]);
}
    }
    printf("%s",str);
        return 0;
}
