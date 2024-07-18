#include <bits/stdc++.h>

using namespace std;
// tutorial
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		long long s = 0;
		while(n >= 1) {
			s += n;
			n /= 2;
		}
		cout << s << endl;
	}
}
