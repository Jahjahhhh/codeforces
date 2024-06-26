#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		char r1[n], r2[n];
		bool f = 1;
		for(int i = 0; i < n; i++) {
			cin >> r1[i];
			if(r1[i] == 'G') r1[i] = 'B';
		}
		for(int i = 0; i < n; i++) {
			cin >> r2[i];
			if(r2[i] == 'G') r2[i] = 'B';
		}
		for(int i = 0; i < n; i++) {
			if(r1[i] != r2[i]) {
				cout << "NO\n";
				f = 0;
				break;
			}
		}
		if(f) cout << "YES\n";
	}
}
