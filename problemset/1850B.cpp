#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a, b, n, t; cin >> t;
	while(t--) {
		cin >> n;
		int ans, qual, max_q = 0;
		for(int i = 1; i <= n; i++) {
			cin >> a >> b;
			if(a <= 10) {
				qual = b;
				if(qual > max_q) {
					max_q = qual;
					ans = i;
				}
			}
		}
		cout << ans << endl;
	}
}
