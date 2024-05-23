#include <stdio.h>

int main() {

	int k, n, w, sum = 0;
	scanf("%d %d %d", &k, &n, &w);

	while(w)
		sum += k*w--;
	sum - n > 0 ? printf("%d", sum-n) : printf("0"); 
	
	return 0;
}
