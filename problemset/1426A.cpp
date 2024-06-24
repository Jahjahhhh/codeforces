#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	float n, x;
	while(t--) {
		cin >> n >> x;
		if(n == 1 || n == 2) {
			cout << 1 << endl;
			continue;
		}
		cout << ceil((n - 2) / x) + 1 << endl;
	}
}
