#include <bits/stdc++.h>

using namespace std;

int k(int a) {
	int count = 0;
	while((a /= 10) > 0) count++;
	return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int m; cin >> m;
		int d = pow(10, k(m));
		cout << m - d << endl;
	}
}
