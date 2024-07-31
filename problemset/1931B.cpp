#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	int a[n];
	int s = 0;
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    s += a[i];
	}
	bool f = 0;
	if(s % n != 0) {
	    cout << "NO" << endl;
	    continue;
	} else if(n == 1) {
	    cout << "YES" << endl;
	    continue;
	} else if(s % n == 0) {
	    int avg = s / n;
	    int carry = 0;
	    for(int i = 0; i < n; i++) {
		if(a[i] > avg) {
		    carry += a[i] - avg;
		} else if(a[i] < avg) {
		    if((carry + a[i]) >= avg) {
			carry -= (avg - a[i]);
		    } else {
			cout << "NO" << endl;
			f = 1;
			break;
		    }
		}
	    }
	}
	if(f == 0) cout << "YES" << endl;
    }
}
