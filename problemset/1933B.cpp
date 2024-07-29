#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	vector<int> a(n);
	int s = 0;
	for(int i = 0; i < n; i++) { 
	    cin >> a[i];
	    s += a[i];
	}
	if(s % 3 == 0) cout << 0 << endl;
	else if(s % 3 == 2) cout << 1 << endl;
	} else {
	    bool f = 0;
	    for(int i = 0; i < n; i++) {
		if(a[i] % 3 == 1) {
		    cout << 1 << endl;
		    f = 1;
		    break;
		}
	    }
	    if(!f) cout << 2 << endl;
	}
    }
}
