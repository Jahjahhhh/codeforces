#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	char c[5];
	while(t--) {
		int a = 0, b = 0;
		cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4];
		for(char l : c) {
			l == 'A' ? a++ : b++;
		}
		a > b ? cout << "A\n" : cout << "B\n";
	}
}
