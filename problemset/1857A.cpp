#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, x; cin >> t;
	while(t--) {
		int sum1 = 0, sum2 = 0;
		cin >> n >> sum1;
		for(int i = 1; i < n; i++) {
			cin >> x;
			sum2 += x;
		}
		if((sum1 % 2) == (sum2 % 2)) cout << "YES\n";
		else cout << "NO\n";
	}
}
