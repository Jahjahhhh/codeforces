#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	if(n%2) {
		cout << -1;
	} else {
		for(int i = n; i > 0; i--) {
			if((i == (n/2) + 1) && (n % 2)) {
				cout << i - 1 << ' ' << i << ' ';
				i--;
			} else {
				cout << i << ' ';
			}
		}
	}
}
