#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	if(n < m) {
		cout << -1;
		return 0;
	}

	int f = 0;
	int s = (n / 2) + (n%2);
	for(int i = s; i <= n; i++) {
		if(i % m == 0) {
			f = 1;
			s = i;
			break;
		}
	}
	f ? cout << s : cout << -1;
}
