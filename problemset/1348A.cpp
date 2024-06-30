#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		int p1 = (1 << n), p2 = 0;
		for(int i = 1; i < n/2; i++)
			p1 += (1 << i);
		for(int i = n/2; i < n; i++)
			p2 += (1 << i);
		cout << p1 - p2 << endl;
	}
}
