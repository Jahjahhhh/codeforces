#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	string dots = "........";
	string s;
	while(t--) {
		for(int i = 0; i < 8; i++) {
			cin >> s;
			if(s != dots) {
				for(char c : s)
					if(c >= 'a' && c <= 'z')
						cout << c;
			}
		}
		cout << endl;
	}
}
