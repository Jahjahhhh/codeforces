#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n]; for(int &i : a) cin >> i;
		for(int i = 0; i < n; i++) {
			int l; cin >> l;
			char c;
			for(int j = 0; j < l; j++) {
				cin >> c;
				if(c == 'U') a[i]--;
				else a[i]++;
				if(a[i] > 9) a[i] = 0;
				else if(a[i] < 0) a[i] = 9;
			}
			cout << a[i] << ' ';
		}
		cout << endl;
	}
}
