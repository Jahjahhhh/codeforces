#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		int p = 0;
		for(long long i = 1 <= n; i <= n; i = i * 10 + 1) {
			for(int j = 1; j <= 9; j++) {
				if(i * j <= n)
					p++;
			}
		}
		cout << p << endl;
	}
}
