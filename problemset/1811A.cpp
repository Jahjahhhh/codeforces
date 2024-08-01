#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n, d;
	cin >> n >> d;
	string s; cin >> s;
	bool f = 0;
	for(int i = 0; i < n; i++) {
	    if(s[i] - '0' >= d) {
		cout << s[i];
	    } else {
		cout << d;
		for(int j = i; j < n; j++) {
		    cout << s[j];
		}
		cout << endl;
		f = 1;
		break;
	    }
	}
	if(f == 0) cout << d << endl;
    }
}
