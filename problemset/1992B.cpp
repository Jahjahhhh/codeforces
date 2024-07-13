#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n, k, t; cin >> t;
	while(t--) {
		cin >> k >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		int ans = 0;
		for(int i = 0; i < n-1; i++) {
			if(a[i] == 1) ans++;
			else ans += (2 * a[i]) - 1;
		}
		cout << ans << endl;
	}
}
