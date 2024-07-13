#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		char a[2*n][2*n];
		for(int i = 0; i < 2*n; ++i) {
			for(int j = 0; j < 2*n; ++j) {
				if ((i / 2 + j / 2) % 2 == 0) {
					a[i][j] = '#';
				} else {
					a[i][j] = '.';
				}
			}
		}
		for(int i = 0; i < 2*n; ++i) {
			for(int j = 0; j < 2*n; ++j) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
