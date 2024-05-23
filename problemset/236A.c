#include <stdio.h>

int main() {

	char s[100] = "";
	scanf("%s", s);

	_Bool alpha[26] = {0};
	for(int i = 0; i < 100 && s[i] != 0; i++) {
		alpha[s[i] - 'a'] = 1;
	}

	int count = 0;
	for(int i = 0; i < 26; i++) {
		if(alpha[i]) count++;
	}

	count % 2 ? printf("IGNORE HIM!") : printf("CHAT WITH HER!");

	return 0;
}
