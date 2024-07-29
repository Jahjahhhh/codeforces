#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	float x, ans = 0;
	int y;
	cin >> x >> y;
	if(y % 2 == 0) {
	    ans += y / 2;
	    if(x > (ans * 7)) {
		ans += ceil((x - (ans * 7)) / 15);
	    }
	} else {
	    ans += (y / 2) + 1;
	    if(x > (((ans - 1) * 7) + 11)) {
		ans += ceil((x - (((ans - 1) * 7) + 11)) / 15);
	    }
	}

	cout << ans << endl;
    }
}
