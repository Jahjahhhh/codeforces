#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, f, k;
		cin >> n >> f >> k;
		int a[n]; for(int &i : a) cin >> i;
		f = a[f-1];

		if(n == k) {
			cout << "YES" << endl;
			continue;
		}

		sort(a, a + n, greater<int>());
		for(int i = 0; i < k; i++) {
			if(a[i] == f && a[i] != a[i+1]) {
				cout << "YES" << endl;
				break;
			}
			else if(a[i] == f && a[i] == a[k]) {
				cout << "MAYBE" << endl;
				break;
			}
			else if(i == (k-1)) {
				cout << "NO" << endl;
			}
		}
	}
}
