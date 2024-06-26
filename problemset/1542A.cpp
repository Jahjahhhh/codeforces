#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		int x;
		int count = 0;
		for(int i = 0; i < (2*n); i++) {
			cin >> x;
			if(x % 2) count++;
		}
		count == n ? cout << "yes\n" : cout << "no\n";
	}
}
