#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		char c; cin >> c;
		size_t n = s.length();
		
		if(n == 1 && s[0] == c) {
			cout << "YES" << endl;
			continue;
		} else if(n == 1) {
			cout << "NO" << endl;
			continue;
		}
		bool f = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == c) {
				if(i % 2 == 0) {
					f = 1;
					break;
				}
			}
		}
		f ? cout << "YES" << endl : cout << "NO" << endl;
	}
}
