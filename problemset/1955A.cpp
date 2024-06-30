#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a, b, n, t; cin >> t;
	while(t--) {
		int ans = 0;
		cin >> n >> a >> b;
		if((2*a) >= b) {
			if(n % 2 == 0) {
				ans = b * (n/2);
			} else {
				ans = b * (n/2);
				ans += a;
			}
		} else {
			ans = n * a;
		}
		cout << ans << endl;
	}
}
