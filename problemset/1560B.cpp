#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		long long a, b, c;
		cin >> a >> b >> c;
		long long d = b - a;
		if(d < 0) d = -d;
		long long n = 2 * d;
		long long ans = c + ((c <= d) ? d : -d);
		if(c > n || b > n || a > n) cout << -1 << endl;
		else cout << ans << endl;
	}
}
