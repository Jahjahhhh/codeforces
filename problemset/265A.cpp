#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	string s; cin >> s;
	string t; cin >> t;

	size_t pos = 0;

	for(int i = 0; i < t.length(); i++) {
		if(s[pos] == t[i]) pos++;
		// cout << "s: " << s[i] << " t: " << t[pos] << " pos: " << pos << " i: " << i << endl;
	}

	cout << pos + 1 << endl;
}
