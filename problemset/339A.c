#include <stdio.h>
#include <ctype.h>

int main() {
	char s[100] = "";
	scanf("%s", s);
	int one = 0, two = 0, three = 0;
	for(int i = 0; i < 100; i++) {
		if(isdigit(s[i]))
			switch(s[i] - '0') {
				case 1: one++; break;
				case 2: two++; break;
				case 3: three++; break;
				default: printf("uhh\n");
		} 
	}
	while(one--) {
		printf("1");
		if(one || two || three) {
			printf("+");
		}
	}
	while(two--) {
		printf("2");
		if(two || three) {
			printf("+");
		}
	}
	while(three--) {
		printf("3");
		if(three) {
			printf("+");
		}
	}
}
