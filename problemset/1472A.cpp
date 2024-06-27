#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int h, n, t, w; cin >> t;
	while(t--) {
		cin >> w >> h >> n;
		int ans = 1;
		if(n == 1) {
			cout << "YES" << endl;
			continue;
		}
		while(h % 2 == 0) {
			h /= 2;
			ans *= 2;
		}
		while(w % 2 == 0) {
			w /= 2;
			ans *= 2;
		}
		ans >= n ? cout << "YES" << endl : cout << "NO" << endl;
	}
}
