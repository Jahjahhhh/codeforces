#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++) {
			int a; cin >> a;
			s.insert(a);
		}
		if(n % 2 == s.size() % 2) {
			cout << s.size() << endl;
		} else {
			cout << s.size() - 1 << endl;
		}
	}
}
