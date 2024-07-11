#include <bits/stdc++.h>

using namespace std;
// tutorial
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		vector<int> a(26, 0), b(26, 0);
		for(auto x : s) a[x - 'a']++;
		int ans = 0;
		for(auto x : s) {
			a[x - 'a']--;
			b[x - 'a']++;
			int cur = 0;
			for(int i = 0; i < 26; i++)
				cur += min(1, a[i]) + min(1, b[i]);
			ans = max(ans, cur);
		}
		cout << ans << endl;
	}
}
