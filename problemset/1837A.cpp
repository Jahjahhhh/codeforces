#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int x, k;
	cin >> x >> k;
	int ans = 0;
	if(x % k == 0) {
	    cout << 2 << endl;
	    cout << x + 1 << ' ' << -1 << endl;
	} else {
	    cout << 1 << endl;
	    cout << x << endl;
	}
    }
}
