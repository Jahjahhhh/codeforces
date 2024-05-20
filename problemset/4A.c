#include <stdio.h>

int main(void) {
	int w;

	scanf("%d", &w);
	(w > 2) && (w % 2 == 0) ? printf("YES\n") : printf("NO\n");

	return 0;
}
