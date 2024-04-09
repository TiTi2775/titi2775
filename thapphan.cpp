#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long N;
        scanf("%llu", &N);
        printf("%.15f\n", 1.0 / N);
    }
    return 0;
}
