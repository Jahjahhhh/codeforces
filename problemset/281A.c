#include <stdio.h>

int main() {
	char s[1000] = "";
	scanf("%s", s);
	if(s[0] > 'Z')
		s[0] -= 32;
	printf("%s", s);
}
