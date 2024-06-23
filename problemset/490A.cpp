#include <iostream>

using namespace std;

int min(int a, int b, int c) {
	int min;
	if(a <= b && a <= c)
		min = a;
	else if(b <= a && b <= c)
		min = b;
	else
		min = c;
	return min;
}

int main() {
	int n; cin >> n; int s[n];
	int prog = 0, math = 0, pe = 0;

	for(int i = 0; i < n; i++) {
		cin >> s[i];
		switch(s[i]) {
			case 1: prog++; break;
			case 2: math++; break;
			case 3: pe++;
		} // min of 3 categories = max of full teams
	} int w = min(prog, math, pe); cout << w << endl;
	
	bool one = false, two = false, three = false;
	for(int i = 0; i < w; i++) {
		for(int j = 0; j < n; j++) {
			if(s[j] == 1 && !one) {
				cout << j + 1 << ' ';
				s[j] = 0;
				one = true;
			} else if(s[j] == 2 && !two) {
				cout << j + 1 << ' ';
				s[j] = 0;
				two = true;
			} else if(s[j] == 3 && !three) {
				cout << j + 1 << ' ';
				s[j] = 0;
				three = true;
			}
		}
		one = two = three = false;
		cout << endl;
	}
}
