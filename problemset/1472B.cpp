#include <bits/stdc++.h>

using namespace std;

int main() {
	int w, n, t; cin >> t;
	while(t--) {
		cin >> n;
		int sum = 0, c = 0;
		for(int i = 0; i < n; i++) {
			cin >> w;
			sum += w;
		}
		sum % 2 == 0 && n % 2 == 0 ? cout << "YES\n" : cout << "NO\n";
	}
}
