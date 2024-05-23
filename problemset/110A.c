#include <stdio.h>

int main() {

	char n[20];
	scanf("%s", n);

	int l = 0;
	for(int i = 0; i < 20 && n[i] != 0; i++) {
		if(n[i] == '4' || n[i] == '7') l++;
	}
	((l == 7) || (l == 4)) ? printf("YES") : printf("NO");

	return 0;
}
