#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	string s; cin >> s;

	int ans = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i + 0] == 'x' &&
		   s[i + 1] == 'x' &&
		   s[i + 2] == 'x') ans++;
	}
	cout << ans;
}
