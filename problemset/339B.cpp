#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, m; cin >> n >> m;
	int curr = 1;
	long long ans = 0;

	for(int i = 0; i < m; i++) {
		int h; cin >> h;
		if(h >= curr) ans += h - curr;
		else ans += n - (curr - h);
		curr = h;
	}
	cout << ans;
}
