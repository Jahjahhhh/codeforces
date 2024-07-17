#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, x;
		cin >> n;
		bool p1, p2, f = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			if(i == 0) {
				p1 = (x % 2);
			} else if(i == 1) {
				p2 = (x % 2);
			} else {
				if(i % 2 == 0) {
					if(x % 2 != p1) {
						f = 1;
					}
				} else {
					if(x % 2 != p2) {
						f = 1;
					}
				}
			}
		}
		f ? cout << "NO" << endl : cout << "YES" << endl;
	}
}
