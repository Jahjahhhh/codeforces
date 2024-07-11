#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	string s, h;
	cin >> s;
	if(s[0] == 'A') s[0] = 'T';
	bool f = 0;
	for(int i = 0; i < 5; i++) {
		cin >> h;
		if(h[0] == 'A') s[0] = 'T';
		if(s[0] == h[0] || s[1] == h[1]) f = 1;
	}
	f ? cout << "YES" << endl : cout << "NO" << endl;
}
