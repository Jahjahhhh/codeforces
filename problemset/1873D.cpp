#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		string s; cin >> s;

		int ans = 0;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == 'B') {
				i += k - 1;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
