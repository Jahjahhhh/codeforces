#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	string s, s1, s2;
	while(t--) {
		cin >> s;
		int len = s.length();
		if(len % 2 == 1)
			cout << "NO\n";
		else {
			s1 = s.substr(0, len/2);
			s2 = s.substr(len/2, len);
			s1 == s2 ? cout << "YES\n" : cout << "NO\n";
		}
	}
}
