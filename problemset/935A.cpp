#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n/2; i++)
		if((n - i) % i == 0) ans++;

	cout << ans << endl;
}
