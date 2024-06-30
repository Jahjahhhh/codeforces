#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t, x; cin >> t;
	while(t--) {
		cin >> n;
		int sum = 0;
		bool o = 0, e = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			x % 2 == 0 ? e = 1 : o = 1;
			sum += x;
		}
		if(sum % 2 != 0 || (e && o)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
