#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int& i : a) cin >> i;
		sort(a, a + n);
		for(int i = 0; i < n; i++) if(a[i] < 0) a[i] *= -1; else break;
		int sum = 0;
		for(int i : a) sum += i;
		cout << sum << endl;
	}
}
