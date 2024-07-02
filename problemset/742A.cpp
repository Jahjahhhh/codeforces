#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n; cin >> n;
	if(n == 0) {
		cout << 1;
	} else {
		switch(n % 4) {
			case 0: cout << 6; break;
			case 1: cout << 8; break;
			case 2: cout << 4; break;
			case 3: cout << 2; break;
			default:
			long long ans = pow(8, n);
			cout << ans % 10;
		}
	}
}
