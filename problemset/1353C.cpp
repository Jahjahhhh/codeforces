#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		int s = n / 2;
		int sum = 0;
		for(int i = s; i >= 1; i--) {
			sum += i * ((4 * n) - 4);
			n -= 2;
		}
		cout << sum << endl;
	}
}
