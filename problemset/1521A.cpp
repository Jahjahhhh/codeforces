#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	long long a, b, t;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(b == 1) {
			cout << "no" << endl;
		} else {
			cout << "yes" << endl;
			cout << a << ' ' << a * b << ' ' << a*(b+1) << endl;
		}

	}
}
