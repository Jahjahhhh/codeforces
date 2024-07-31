#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string s; cin >> s;
	
	for(int i = 0; i < n; i++) if(s[i] > 'Z') s[i] -= ' ';
	if(s[0] == 'M') {
	    int i = 1;
	    while(s[i] == 'M') i++;
	    if(s[i] == 'E') {
		while(s[i] == 'E') i++;
		if(s[i] == 'O') {
		    while(s[i] == 'O') i++;
		    if(s[i] == 'W') {
			while(s[i] == 'W') i++;
			if(i == n) cout << "YES" << endl;
			else cout << "NO" << endl;
		    } else {
			cout << "NO" << endl; // oopsies forgot this one, who would thunk it with this very readable code :)
		    }
		} else {
		    cout << "NO" << endl;
		}
	    } else {
		cout << "NO" << endl;
	    }
	} else {
	    cout << "NO" << endl;
	}
    }
}
