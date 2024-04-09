#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long N;
        scanf("%llu", &N);
        printf("%llu\n", N*N);
    }
    return 0;
}
