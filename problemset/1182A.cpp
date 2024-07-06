#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	if(n % 2 != 0)  {
		cout << 0;
		return 0;
	}
	int r = 1 << (n/2);
	if(n == 1) r = 0;
	cout << r;
}
