#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n]; for(int &i : a) cin >> i;
		sort(a, a + n);
		int sum = 0;
		for(int i = 0; i < n/2; i++) sum += a[n-1-i] - a[i];
		cout << sum << endl;
	}
}
