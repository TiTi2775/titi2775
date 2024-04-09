#include <stdio.h>
int main() {
	int a, b;
	do {
	scanf("%d", &a);
	} while (a <=0 || a > 6);
	do {
	scanf("%d", &b);
	} while (b <=0 || b > 6);
	printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", a + b, a - b, a * b, a / b, a % b, (float)a / b);
	return 0;
}	
	
