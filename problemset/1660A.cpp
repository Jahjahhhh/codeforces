#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int s = 1;
		if(a == 0) {
			cout << 1 << endl;
			continue;
		}
		s += a + (b * 2);
		cout << s << endl;
	}
}
