#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a = 1;
        if (n < 2) {
            a = 0;
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    a = 0;
                    break;
                }
            }
        }
        printf("%s\n", a ? "YES" : "NO");
    }
    return 0;
}
