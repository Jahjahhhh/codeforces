#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	string s;
	while(t--) {
		cin >> n >> s;
		int sum = 0;
		for(int i = 0; i < n/2; i++) {
			if(s[i] != s[n-i-1]) {
				sum += 2;
			} else {
				break;
			}
		}
		cout << n - sum << endl;
	}
}
