#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t;
	double a, b, c;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		int ans = 0;
		if(a > b) {
			ans = ceil(((a - b) / 2.0) / c);
		} else if(b > a) {
			ans = ceil(((b - a) / 2.0) / c);
		}
		cout << ans << endl;
	}
}
