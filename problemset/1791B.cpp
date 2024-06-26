#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	string s;
	while(t--) {
		cin >> n >> s;
		int x = 0, y = 0;
		bool f = 0;
		for(int i = 0; i < s.length(); i++) {
			switch(s[i]) {
				case 'U': x++; break;
				case 'D': x--; break;
				case 'L': y--; break;
				case 'R': y++;
			}
			if(x == 1 && y == 1) f = 1;
		}
		f ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
