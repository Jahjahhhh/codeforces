#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		(n % 2) ? cout << (n / 2) + 1 << endl : cout << n / 2 << endl;
	}
}
