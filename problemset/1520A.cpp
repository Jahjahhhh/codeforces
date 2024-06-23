#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string s; cin >> s;
		bool is_not_suspicious = true, a[26] = {0}; // a = alphabet bin flag
		char prev_c;
		for(int i = 0; i < n; i++) {
			if(s[i] == s[i+1])
				continue;
			if(a[s[i] - 'A'] == true && prev_c != s[i]) {
				cout << "NO\n";
				is_not_suspicious = false;
				break;
			}
			a[s[i] - 'A'] = true;
			prev_c = s[i];
		}
		if(is_not_suspicious) cout << "YES\n";
	}
}
