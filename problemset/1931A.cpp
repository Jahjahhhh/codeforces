#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string ans;
		if(n <= 28) {
			ans = "aa";
			ans += (n-3) + 'a';
		} else if(n <= 53) {
			ans = 'a';
			ans += (n-1) + 'a' - 27;
			ans += 'z';
		} else {
			ans += n - 52 + 'a' - 1;
			ans += "zz";
		}
		cout << ans << endl;
	}
}
