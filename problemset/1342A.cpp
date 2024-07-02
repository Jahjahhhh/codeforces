#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int a, b, t, x, y;
	cin >> t;
	while(t--) {
		int sum = 0;
		cin >> x >> y >> a >> b;
		if(x < y) {
			sum += (y - x)*a;
			sum += min((x - 0)*b, 2*(x - 0)*a);
		} else if (x > y) {
			sum += (x - y)*a;
			sum += min((y - 0)*b, 2*(y - 0)*a);
		} else {
			sum += min(x*b, 2*x*a);
		}
		cout << sum << endl;
	}
}
