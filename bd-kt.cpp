#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char num[10];
        scanf("%s", num);
        if (strlen(num) < 2 || strlen(num) > 9) {
            printf("NO\n");
            continue;
        }
        printf("%s\n", num[0] == num[strlen(num)-1] ? "YES" : "NO");
    }
    return 0;
}
