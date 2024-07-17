#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
	
		int mx = max({a, b, c});
		int mn = min({a, b, c});

		int mid = a + b  + c - mx - mn;
		int ans = (mx - mid) + (mid - mn);

		cout << ans << endl;
	}
}
