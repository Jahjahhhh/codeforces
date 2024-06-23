#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	int c1 = 0, c2 = 0;
	while(t--) {
		cin >> n;
		if(n == 1) {
			cout << "1 0\n";
			continue;
		} else if(n == 2) {
			cout << "0 1\n";
			continue;
		} 
		int x = n / 3;
		switch(n - ((x * 2) + x)) {
			case 0: cout << x << ' ' << x << endl; break;
			case 1: cout << x + 1 << ' ' << x << endl; break;
			case 2: cout << x << ' ' << x + 1 << endl;
		}
	}
}
