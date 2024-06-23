#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, t; cin >> t;
	int min, max;
	while(t--) {
		cin >> a >> b;
		if(a > b) {
			min = b;
			max = a;
		} else {
			min = a;
			max = b;
		}
		if(2 * min < max) cout << max * max << endl;
		else cout << (2*min) * (2*min) << endl;
	}
}
