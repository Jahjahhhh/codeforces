#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, m, t; cin >> t;
	while(t--) {
		cin >> n >> m;
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		cout << min(2, n - 1) * m << endl;
	}
}
