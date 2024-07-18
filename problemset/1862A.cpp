#include <bits/stdc++.h>

using namespace std;

string s = "vika";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		char c[n][m];

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> c[i][j];
			}
		}

		if(m < 4) {
			cout << "NO" << endl;
			continue;
		}
		
		int a = 0;
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				// cout << i << ' ' << j << endl;
				// cout << c[j][i] << ' ' << s[a] << endl;
				if(c[j][i] == s[a]) {
					a++;
					break;
				}
			}
			if(a == 4) break;
		}
		if(a == 4) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
