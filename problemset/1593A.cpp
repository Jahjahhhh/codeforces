#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << max(0, max(b, c) + 1 - a) << ' '
			 << max(0, max(a, c) + 1 - b) << ' '
			 << max(0, max(b, a) + 1 - c) << endl;
	}
}
