#include <bits/stdc++.h>

// Tutorial
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string s; cin >> s;
		int i = 0;
		while(i < n) {
			int start = i;
			cout << s[i++];
			while(s[i++] != s[start]);
		}
		cout << endl;
	}
}
