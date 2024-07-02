#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, t;
	cin >> n >> t;

	if(t == 10 && n == 1) {
		cout << -1;
		return 0;
	} else if(t == 10) {
		for(int i = 0; i < n; i++) {
			if(i == 0) cout << 1;
			else cout << 0;
		}
		return 0;
	}

	for(int i = 0; i < n; i++) cout << t; 
}
