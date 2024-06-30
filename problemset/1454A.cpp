#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		if(n == 2) {
			cout << "2 1" << endl;
			continue;
		}
		for(int i = n; i > 0; i--) {
			if(n % 2) {
				if(i == (n/2)+1) {
					cout << n/2 << ' ' << (n/2) + 1 << ' ';
					i--;
				} else
					cout << i << ' ';
			} else cout << i << ' ';
		}
		cout << endl;
	}
}
