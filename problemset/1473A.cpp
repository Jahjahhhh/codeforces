#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) {
		int n, d;
		cin >> n >> d;
		int a[n]; for(int &i : a) cin >> i;
		sort(a, a + n);
		int mn = a[0] + a[1];
		int mx = *max_element(a, a + n);

		if(mx > d && mn > d) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}

	}
}
