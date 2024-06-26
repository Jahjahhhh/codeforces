#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		bool b;
		int blank_len = 0, max_bl = 0;
		for(int i = 0; i < n; i++) {
			cin >> b;
			(!b) ? blank_len++ : blank_len = 0;
			if(max_bl < blank_len) max_bl = blank_len;
		}
		cout << max_bl << endl;
	}
}
