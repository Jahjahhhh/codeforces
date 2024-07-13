#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for(int i = 0; i < n; i++) {
			if(a[i] == b[n-1]) cout << a[i] - b[n - 2] << ' ';
			else cout << a[i] - b[n - 1] << ' ';
		}
		cout << endl;
	}
}
