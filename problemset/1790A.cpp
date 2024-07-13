#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t; cin >> t;
	string s;
	string pi = "314159265358979323846264338327";
	while(t--) {
		cin >> s;
		int ans = 0;
		for(int i = 0; i < 30; i++) {
			if(s[i] == pi[i]) ans++;
			else break;
		}
		cout << ans << endl;
	}
}
