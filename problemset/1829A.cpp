#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	string cf = "codeforces";
	string s;
	int ans;
	while(t--) {
		ans = 0;
		cin >> s;
		for(int i = 0; i < 10; i++) {
			if(cf[i] != s[i]) ans++;
		}
		cout << ans << endl;
	}
}
