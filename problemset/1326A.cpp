#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		if(n == 1) {
			cout << -1 << endl;
			continue;
		}
		int x = n - 2;
		string ans = "23";
		while(x--) ans += '3';
		cout << ans << endl;
	}
}
