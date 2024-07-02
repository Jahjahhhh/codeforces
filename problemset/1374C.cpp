#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, t; cin >> t;
	string s;
	while(t--) {
		cin >> n >> s;
		int ans = 0;
		int x = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '(') {
				x++;
			} else {
				x--;
				if(x < 0) {
					x = 0;
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
}
