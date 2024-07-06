#include <bits/stdc++.h>

using namespace std;

#define ll long long
// tutorial
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	sort(a, a + n);
	for(int i = 1; i < n-1; i++) {
		if(a[i-1] + a[i] > a[i+1]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
