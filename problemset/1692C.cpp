#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		char s[8][8];
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				cin >> s[i][j];
			}
		}
		for(int i = 1; i < 7; i++) {
			for(int j = 1; j < 7; j++) {
				if(s[i][j] == '#' &&
				   s[i-1][j] == '.' &&
				   s[i-1][j+1] == '#' &&
				   s[i][j+1] == '.' &&
				   s[i+1][j+1] == '#' &&
				   s[i+1][j] == '.' &&
				   s[i-1][j-1] == '#' &&
				   s[i][j-1] == '.' &&
				   s[i-1][j-1] == '#'
				)
				{
					cout << i+1 << ' ' << j+1 << endl;
					break;
				}
			}
		}
	}
}
