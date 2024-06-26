#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x; cin >> n;
	int prev = 0, ans = 0, max_ans = 1;
	for(int i = 0; i < n; i++) {
		cin >> x;
		(prev < x) ? ans++ : ans = 1;
		if(max_ans < ans) max_ans = ans;
		prev = x;
	}
	cout << max_ans << endl;
}
