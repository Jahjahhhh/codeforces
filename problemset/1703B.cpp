#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	string s;
	while(t--) {
		int ans = 0;
		bool alpha[26] = {0};
		cin >> n >> s;
		for(int i = 0; i < s.length(); i++) {
			if(alpha[s[i] - 'A']) {
				ans += 1;
			} else {
				ans += 2;
				alpha[s[i] - 'A'] = 1;
			}
		}
		cout << ans << endl;
	}
}
