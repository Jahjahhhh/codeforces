#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		char c;
		int ans = 0;
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				cin >> c;
				if(c == 'X') {
					if(i == 0 || i == 9 || j == 0 || j == 9) ans++;
					else if(i == 1 || i == 8 || j == 1 || j == 8) ans += 2;
					else if(i == 2 || i == 7 || j == 2 || j == 7) ans += 3;
					else if(i == 3 || i == 6 || j == 3 || j == 6) ans += 4;
					else if(i == 4 || i == 5 || j == 4 || j == 5) ans += 5;
				}
			}
		}
		cout << ans << endl;
	}
}
