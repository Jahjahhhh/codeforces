#include <bits/stdc++.h>

using namespace std;

int reverse_int(int n) {
    int r = 0;
    while(n > 0) {
	r = r * 10 + n % 10;
	n /= 10;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int s; cin >> s;
	int d = 9;
	int ans = 0;
	if(s > d) {
	    while(s > d) {
		s -= d;
		ans = ans * 10 + d;
		if(s < d) {
		    ans = ans * 10 + s;
		    break;
		}
		d--;
	    }
	} else ans = s;
	cout << reverse_int(ans) << endl;
    }
}
