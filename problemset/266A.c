#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	char s[n];
	scanf("%s", s);

	char prev = 0;
	int count = 0;
	while(n--) {
		if(s[n] == prev) count++;
		prev = s[n];
	} printf("%d", count);

	return 0;
}
