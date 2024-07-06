#include <bits/stdc++.h>
// tutorial

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	long long n, k, t; cin >> t;
	while(t--) {
		cin >> n >> k;
		long long x = (n + k - 1) / k;
		k *= x;
		cout << (k + n - 1) / n << endl;
	}
}
