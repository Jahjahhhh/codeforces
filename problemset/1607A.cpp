#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) {
		char a[26];
		for(char& c : a) cin >> c;
		string s; cin >> s;
		int d = 0;
		for(int i = 0; i < s.length(); i++) {
			for(int j = 0; j < 26; j++) {
				if(s[i] == a[j]) s[i] = j;
			}
		}
		for(int i = 0; i < s.length() - 1; i++) {
			d += abs(s[i] - s[i+1]);
		}
		cout << d << endl;
	}

}
