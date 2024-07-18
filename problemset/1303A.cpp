#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		size_t n = s.size();
		for(int i = n - 1; i >= 0; i--) {
			if(s[i] == '1') break;
			if(s[i] == '0') s[i] = '1';
		}
		int ans = 0;
		bool f = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				f = 1;
			}
			if(f && s[i] == '0') ans++;
		}
		cout << ans << endl;
	}
}
