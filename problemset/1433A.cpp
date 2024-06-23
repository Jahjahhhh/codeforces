#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, x; cin >> t;
	while(t--) {
		cin >> x;
		int d = 0, l = x % 10; // naming is hard
		d += (l - 1) * 10;
		if(x == l * 1111)     d += 10;
		else if(x == l * 111) d += 6;
		else if(x == l * 11)  d += 3;
		else                  d += 1;
		cout << d << endl;
	}
}
