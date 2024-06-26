#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, x, y, x1, y1; cin >> t;
	while(t--) {
		cin >> x >> y >> x1 >> y1;
		int mx = max(x, y);
		int mx1 = max(x1, y1);
		if((mx == x && mx1 == x1) || (mx == y && mx1 == y1)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
