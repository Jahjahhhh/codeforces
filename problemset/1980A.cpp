#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string s; cin >> s;
		int p[7] = {0};
		for(int i = 0; i < n; i++) p[s[i] - 'A']++;
		int ans = 0;
		for(int i = 0; i < 7; i++) {
			if(p[i] < m) ans += m - p[i];
		}
		cout << ans << endl;
	}
}
