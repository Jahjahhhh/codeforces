#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		int a[n];
		for(int &i : a)
			cin >> i;
		sort(a, a + n);
		int prev = 0, count, ans = 0;
		for(int i : a) {
			(i == prev) ? count++ : count = 1;
			if(count == 3) ans = i;
			prev = i;
		}
		ans == 0 ? cout << -1 << endl : cout << ans << endl;
	}
}
