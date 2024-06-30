#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int l, r, t; cin >> t;
	while(t--) {
		cin >> l >> r;
		if(2*l > r) cout << "-1 -1" << endl;
		else cout << l << ' ' << l*2 << endl;
	}
}
