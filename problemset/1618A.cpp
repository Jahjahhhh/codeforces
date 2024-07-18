#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int a[7]; for(int &i : a) cin >> i;
		sort(a, a + 7);
		cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[0] - a[1] << endl;
	}
}
