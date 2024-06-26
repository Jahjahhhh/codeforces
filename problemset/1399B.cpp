#include <bits/stdc++.h>

using namespace std;

#define int long long
// we do a little bit a trolling
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		int a[n], b[n];
		for(int &i : a)
			cin >> i;
		for(int &i : b)
			cin >> i;
		int min_a = *min_element(a, a + n);
		int min_b = *min_element(b, b + n);
		int ans = 0, x, y;
		for(int i = 0; i < n; i++) {
			x = a[i] - min_a;
			y = b[i] - min_b;
			if(a[i] > min_a && b[i] > min_b) {
				if(x > y) {
					a[i] = min_a;
					b[i] -= x;
					ans  += x;
				} else {
					b[i] = min_b;
					a[i] -= y;
					ans  += y;
				}
			}
			if(b[i] > min_b) {
				b[i] = min_b;
				ans += y;
			}
			if(a[i] > min_a) {
				a[i] = min_a;
				ans += x;
			}
		}
		cout << ans << endl;
	}
}
