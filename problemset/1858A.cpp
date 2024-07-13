#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int a, b, c, t;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		if(c % 2 == 0) {
			if(a > b) cout << "First";
			else cout << "Second";
			cout << endl;
		} else {
			if(b > a) cout << "Second";
			else cout << "First";
			cout << endl;
		}
	}
}
