#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a, b, c, t; cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		int opt1 = a - 1;
		int opt2 = (c - 1) + abs(b - c);
		if(opt1 < opt2) cout << 1 << endl;
		else if(opt2 < opt1) cout << 2 << endl;
		else cout << 3 << endl;
	}
}
