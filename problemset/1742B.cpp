#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; int a[n];
		for(int &e : a)
			cin >> e;
		bool f = 1;
		set<int> s;
		for(int i = 0; i < n; i++) {
			if(i > 0 && s.find(a[i]) != s.end()) {
				cout << "NO\n";
				f = 0;
				break;
			}
			s.insert(a[i]);
		}
		if(f) cout << "YES\n";
	}
}
