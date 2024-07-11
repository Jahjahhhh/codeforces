#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(2 * n);
		for (int &i : a) cin >> i;
		vector<int> used(n);
		vector<int> p;
		for (int i = 0; i < 2 * n; ++i) {
			if (!used[a[i] - 1]) {
				used[a[i] - 1] = true;
				p.push_back(a[i]);
			}
		}
		for (int i : p) cout << i << " ";
		cout << endl;
	}
}
