#include <bits/stdc++.h>

using namespace std;
// tutorial
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n, k, t;
	cin >> t;
	while(t--) {
		string s;
		cin >> n >> k >> s;
		vector<int> w(n + 1);
		for(int i = 1; i <= n; i++) {
			w[i] = w[i - 1] + int(s[i - 1] == 'W');
		}
		int ans = INT_MAX;
		for(int i = k; i <= n; i++) {
			ans = min(ans, w[i] - w[i - k]);
		}
		cout << ans  << endl;
	}
}
