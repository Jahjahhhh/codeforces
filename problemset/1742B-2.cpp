#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, x; cin >> t;
	while(t--) {
		cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++) {
			cin >> x;
			s.insert(x);
		}
		s.size() == n ? cout << "YES\n" : cout << "NO\n";
	}
}
