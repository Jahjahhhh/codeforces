#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a, b, t; cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a < b) {
			(b - a) % 2 ? cout << 1 : cout << 2;
		} else if(b < a) {
			(a - b) % 2 ? cout << 2 : cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
}
