#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int i = 0;
	while(a <= b) {
		i++;
		a*=3;
		b*=2;
	}
	printf("%d", i);
	return 0;
}
