#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int &e : v) {
			cin >> e;
		}
		int maxPos = max_element(v.begin(), v.end()) - v.begin();
		int minPos = min_element(v.begin(), v.end()) - v.begin();
		cout << min({
				max(maxPos, minPos) + 1,
				(n - 1) - min(maxPos, minPos) + 1,
				(n - 1) - maxPos + minPos + 2,
				(n - 1) - minPos + maxPos + 2
		}) << endl;
	}
}
