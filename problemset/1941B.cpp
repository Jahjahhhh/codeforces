#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, t; cin >> t;
    while (t--) {
		cin >> n;
		bool f = 0;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) cin >> a[i];
		for (int i = 0; i < n - 2; ++i) {
			if (a[i] < 0) {
				f = 1;
				break;
			}
			int op = a[i];
			a[i] -= op;
			a[i + 1] -= 2 * op;
			a[i + 2] -= op;
		}
		if (a[n - 1] != 0 || a[n - 2] != 0 || f) cout << "NO" << endl;
		else cout << "YES" << endl;
    }
}
