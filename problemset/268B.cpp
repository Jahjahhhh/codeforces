#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	long long n; cin >> n;
	long long ans = (n + 1) * (n - 1) * n / 6 + n;
	cout << ans;
}
