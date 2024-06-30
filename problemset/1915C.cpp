#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t, x; cin >> t;
	while(t--) {
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
		}
		x = sqrt(sum);
		if((x * x) == sum) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
