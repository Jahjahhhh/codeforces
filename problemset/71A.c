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
	size_t length;
	while(n--) {
		scanf("%s", word);
		length = str_len(word);
		if(length > 10)
		printf("%c%zu%c\n", word[0], length-2, word[length-1]);
		else printf("%s\n", word);

	}

	return 0;
}
