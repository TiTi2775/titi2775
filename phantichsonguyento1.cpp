#include <stdio.h>

void primeFactors(int n) {
    while (n % 2 == 0) printf("%d ", 2), n /= 2;
    for (int i = 3; i * i <= n; i += 2)
        while (n % i == 0) printf("%d ", i), n /= i;
    if (n > 2) printf("%d ", n);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        primeFactors(n);
        printf("\n");
    }
    return 0;
}
