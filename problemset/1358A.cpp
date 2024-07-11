#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n, m, t; cin >> t;
	while(t--) {
		cin >> n >> m;
		int ans = n * m;
		if(ans % 2) {
			ans /= 2;
			ans++;
		} else {
			ans /= 2;
		}
		cout << ans << endl;
	}
}
