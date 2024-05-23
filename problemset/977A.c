#include <stdio.h>

int main() {
	
	int n, k;
	scanf("%d %d", &n, &k);

	while(k--)
		n % 10 == 0 ? n /= 10 : n--;
	printf("%d", n);

	return 0;
}
