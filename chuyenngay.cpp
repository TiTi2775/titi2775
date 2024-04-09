#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);
    printf("%d %d %d\n", days / 365, (days % 365) / 7, (days % 365) % 7);
    return 0;
}
