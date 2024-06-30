#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, m, k, t; cin >> t;
	while(t--) {
		cin >> n >> m >> k;
		int b[n], c[m];
		for(int &i : b) cin >> i;
		for(int &i : c) cin >> i;
		int ans = 0;
		for(int i = 0; i < n; i++) {
			if(b[i] >= k) continue;
			for(int j = 0; j < m; j++) {
				if(b[i] + c[j] <= k) ans++;
			}
		}
		cout << ans << endl;
	}
}
