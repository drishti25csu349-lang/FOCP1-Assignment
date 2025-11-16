#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int g, p, n;
        scanf("%d %d", &g, &p);
        scanf("%d", &n);
        
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x == 1) a++;
            if (y == 1) b++;
        }
        
        int cost1 = a * g + b * p;
        int cost2 = a * p + b * g;
        int ans = (cost1 < cost2) ? cost1 : cost2;
        
        printf("%d\n", ans);
    }
    return 0;
}
