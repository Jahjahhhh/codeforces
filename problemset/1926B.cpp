#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string s;
	bool f = 0;
	for(int i = 0; i < n; i++) {
	    cin >> s;
	    if(n != 2) {
		for(int j = 1; j < n-1; j++) {
		    if(s[j-1] == '0' && s[j] == '1' && s[j+1] == '0') f = 1;
		}
	    }
	}
	if(n == 2) {
	    cout << "SQUARE" << endl;
	} else if(f) cout << "TRIANGLE" << endl;
	else if(f == 0) cout << "SQUARE" << endl;
    }
}
