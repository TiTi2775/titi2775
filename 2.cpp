#include <stdio.h>
int main () {
	int T;
	scanf("%d", &T);
	
	while (T--) {
		int N, count = 0;
		scanf("%d", &N);
		
		for (int i = 1; i <= N; i++) {
			if (N % i == 0 && i % 2 ==0) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}	

