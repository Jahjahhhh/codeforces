#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string a; cin >> a;
		string b; cin >> b;

		int count = 0, count2 = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] == '0' && b[i] == '1') {
				count++;
			} else if(a[i] == '1' && b[i] == '0') {
				count2++;
			}
		}
		cout << max(count, count2) << endl;
	}
}
