#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n, k;
	cin >> n >> k;

	if(k == 0) {
	    cout << 0 << endl;
	    continue;
	}
	if(k <= n) {
	    cout << 1 << endl;
	    continue;
	}
	int ans = 1;
	k -= n;
	int a = n - 1;
	while(k > 0) {
	    ans++;
	    k -= a;
	    if(k > 0) {
		ans += 1;
		k -= a;
	    }
	    a--;
	}
	cout << ans << endl;
    }
}
