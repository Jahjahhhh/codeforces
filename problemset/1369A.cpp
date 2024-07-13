#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int n, t; cin >> t;
	while(t--) {
		cin >> n;
		if(n % 4 == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
