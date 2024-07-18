#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	string s1; cin >> s1;
	string s2; cin >> s2;

	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans += min(abs(s1[i] - s2[i]), (10 - abs(s1[i] - s2[i])));
	}
	cout << ans << endl;
}
