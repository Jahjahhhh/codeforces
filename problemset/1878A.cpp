#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, k, t, x; cin >> t;
	while(t--) {
		cin >> n >> k;
		bool f = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			if(x == k) f = 1;
		}
		f ? cout << "YES" << endl : cout << "NO\n";
	}
}
