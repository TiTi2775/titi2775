#include <stdio.h>
#include <math.h>
int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        printf("%s\n", (int)sqrt(N) * (int)sqrt(N) == N ? "YES" : "NO");
    }
    return 0;
}
