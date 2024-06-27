#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	string s;
	while(t--) {
		cin >> n >> s;
		int min_i, max_i;
		for(int i = 0; i < n; i++)
			if(s[i] == 'B') {
				min_i = i;
				break;
		}
		for(int i = n - 1; i >= 0; i--)
			if(s[i] == 'B') {
				max_i = i;
				break;
		}
		cout << max_i - min_i + 1 << endl;
	}
}
