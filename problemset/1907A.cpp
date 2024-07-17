#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		char c, r;
		cin >> c >> r;
		for(char i = 'a'; i <= 'h'; i++) {
			if(c != i) cout << i << r << endl;
		}
		for(char i = '1'; i <= '8'; i++) {
			if(r != i) cout << c << i << endl;
		}
	}
}
