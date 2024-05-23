#include <stdio.h>

int main() {

	char s[100] = "";
	scanf("%s", s);

	int up = 0, lo = 0;
	for(int i = 0; i < 100 && s[i] != 0; i++) {
		if(s[i] >= 'A' && s[i] <= 'Z')
			up++;
		else lo++;
	}
	if(up > lo) {
		for(int i = 0; i < 100 && s[i] != 0; i++) {
			if(s[i] >= 'a' && s[i] <= 'z') s[i]-=32;
		}
	} else {
		for(int i = 0; i < 100 && s[i] != 0; i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
		}
	}
	printf("%s", s);

	return 0;
}
