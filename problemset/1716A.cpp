#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if(n == 1) {
			cout << 2 << endl;
		} else if(n == 2 || n == 3) {
			cout << 1 << endl;
		} else {
			cout << (int)(ceil(n / 3.0)) << endl;
		}
	}
}
