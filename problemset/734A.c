#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	char s[n];
	scanf("%s", s);

	size_t a = 0, d = 0;
	while(n--)
		s[n] == 'A' ? a++ : d++;
	if(a > d)
		printf("Anton");
	else if(d > a)
		printf("Danik");
	else
	    printf("Friendship");

	return 0;
}
