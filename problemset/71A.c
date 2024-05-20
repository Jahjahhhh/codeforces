#include <stdio.h>

size_t str_len(char str[100]) {
	size_t len = 0;
	while(str[len]) len++;
	return len;
}

int main(void) {

	int n;
	scanf("%d", &n);

	char word[100] = "";
	while(n > 0) {
		scanf("%s", word);
		printf("len: %zu.\n", str_len(word));
	}

	return 0;
}
