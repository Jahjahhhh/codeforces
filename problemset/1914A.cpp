#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	string s; cin >> s;
	vector<int> alpha(26, 0);
	int ans = 0, count = 1;
	for(char c : s) alpha[c - 'A']++;
	for(int i = 0; i < 26; i++, count++) {
	    if(alpha[i] >= count) {
		ans++;
	    }
	}
	cout << ans << endl;
    }
}
