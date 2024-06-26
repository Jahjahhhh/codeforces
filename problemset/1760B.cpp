#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		char c, max_c = 0;
		for(int i = 0; i < n; i++) {
			cin >> c;
			if(c > max_c) max_c = c;
		}
		cout << max_c + 1 - 'a' << endl;
	}	
}
