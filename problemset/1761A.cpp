#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;

		int ans = 0;
		if(n % 3 == 0) {
			ans = n / 3;
		} else if(n % 3 == 1) {
			ans = n / 3;
			ans += 1;
		} else if(n % 3 == 2) {
			ans = n / 3;
			ans++;
		}

		cout << ans << endl;
	}
}
