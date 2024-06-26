#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t; cin >> t;
	while(t--) {
		int c[3] = {0};
		cin >> c[0] >> c[1] >> c[2] >> n;
		sort(c, c + 3);
		int x = ((c[2] - c[1]) + (c[2] - c[0]));
		((n-x) % 3 == 0 && x <= n) ? cout << "YES\n" : cout << "NO\n";
	}
}
