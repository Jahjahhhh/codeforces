#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		n % 3 == 0 ? cout << "Second" << endl : cout << "First" << endl;
	}
}
