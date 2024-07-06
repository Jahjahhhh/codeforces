#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	int ans = 0;
	if(n == m) cout << ans;
	else if(m % n != 0) cout << -1;
	else {
		int x = m / n;
		while(x % 2 == 0) {
			x /= 2;
			ans++;
		}
		while(x % 3 == 0) {
			x /= 3;
			ans++;
		}
		if(x != 1) cout << -1;
		else cout << ans;
	}
}
