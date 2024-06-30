#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	string s;
	int x = 'A' + 'B' + 'C' + '?';
	while(t--) {
		for(int i = 0; i < 3; i++) {
			cin >> s;
			int sum = s[0] + s[1] + s[2];
			if((sum + '?') != x)
				cout << (char)(x-sum) << endl;
		}
	}
}
